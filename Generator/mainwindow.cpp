#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QStyle>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Инициализация значений
    soilMoisture = 0;
    lightValue = 0;
    temperature = 0;
    humidity = 0;

    soilMoistureThreshold = 30;
    lightThreshold = 500;
    temperatureThreshold = 25;
    humidityThreshold = 40;
    requiredLightTime = 6;

    pumpActive = false;
    lampActive = false;
    humidifierActive = false;

    naturalLightDuration = 0;
    artificialLightDuration = 0;

    // Настройка UI
    setupStyles();

    // Инициализация спинбоксов
    ui->soilMoistureSpin->setValue(soilMoistureThreshold);
    ui->lightThresholdSpin->setValue(lightThreshold);
    ui->temperatureSpin->setValue(temperatureThreshold);
    ui->humiditySpin->setValue(humidityThreshold);
    ui->lightTimeSpin->setValue(requiredLightTime);

    // Подключение сигналов
    connect(ui->soilMoistureSpin, SIGNAL(valueChanged(int)), this, SLOT(checkConditions()));
    connect(ui->lightThresholdSpin, SIGNAL(valueChanged(int)), this, SLOT(checkConditions()));
    connect(ui->temperatureSpin, SIGNAL(valueChanged(int)), this, SLOT(checkConditions()));
    connect(ui->humiditySpin, SIGNAL(valueChanged(int)), this, SLOT(checkConditions()));
    connect(ui->lightTimeSpin, SIGNAL(valueChanged(int)), this, SLOT(checkConditions()));
    connect(ui->testButton, SIGNAL(clicked()), this, SLOT(onTestButtonClicked()));

    // Настройка таймеров
    sensorTimer = new QTimer(this);
    connect(sensorTimer, SIGNAL(timeout()), this, SLOT(updateSensorData()));
    sensorTimer->start(200000000);

    lightUpdateTimer = new QTimer(this);
    connect(lightUpdateTimer, SIGNAL(timeout()), this, SLOT(updateLightTimer()));
    lightUpdateTimer->start(1000);

    qsrand(QTime::currentTime().msec());
    generateRandomData();
    updateUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupStyles()
{
    // Стили для статусов
    QString statusStyle = "QLabel {"
                          "  font: bold 14px;"
                          "  padding: 8px;"
                          "  border-radius: 5px;"
                          "  color: white;"
                          "}";

    ui->pumpStatus->setStyleSheet(statusStyle + "background: #e74c3c;");
    ui->lampStatus->setStyleSheet(statusStyle + "background: #e74c3c;");
    ui->humidifierStatus->setStyleSheet(statusStyle + "background: #e74c3c;");
    ui->lightRemainingLabel->setStyleSheet("font: 14px; color: #2c3e50;");

    // Стиль кнопки
    ui->testButton->setStyleSheet(
        "QPushButton {"
        "  background: #3498db;"
        "  color: white;"
        "  padding: 12px;"
        "  border-radius: 6px;"
        "  font: bold 16px;"
        "}"
        "QPushButton:pressed { background: #2980b9; }"
    );
}

void MainWindow::updateUI()
{
    // Обновление данных датчиков
    ui->soilMoistureLabel->setText(QString::number(soilMoisture) + "%");
    ui->lightValueLabel->setText(QString::number(lightValue));
    ui->temperatureLabel->setText(QString::number(temperature) + "°C");
    ui->humidityLabel->setText(QString::number(humidity) + "%");

    // Обновление статусов
    ui->pumpStatus->setText(pumpActive ? "Насос\nВКЛ" : "Насос\nВЫКЛ");
    ui->pumpStatus->setStyleSheet(pumpActive ? "background: #2ecc71;" : "background: #e74c3c;");

    ui->lampStatus->setText(lampActive ? "Лампа\nВКЛ" : "Лампа\nВЫКЛ");
    ui->lampStatus->setStyleSheet(lampActive ? "background: #2ecc71;" : "background: #e74c3c;");

    ui->humidifierStatus->setText(humidifierActive ? "Увлажнитель\nВКЛ" : "Увлажнитель\nВЫКЛ");
    ui->humidifierStatus->setStyleSheet(humidifierActive ? "background: #2ecc71;" : "background: #e74c3c;");
}

void MainWindow::generateRandomData()
{
    soilMoisture = qrand() % 100;
    lightValue = qrand() % 1000;
    temperature = 10 + qrand() % 25;
    humidity = 20 + qrand() % 60;
}

void MainWindow::onTestButtonClicked()
{
    generateRandomData();
    checkConditions();
    updateUI();
}

void MainWindow::updateSensorData()
{
    generateRandomData();
    checkConditions();
    updateUI();
}

void MainWindow::checkConditions()
{
    soilMoistureThreshold = ui->soilMoistureSpin->value();
    lightThreshold = ui->lightThresholdSpin->value();
    temperatureThreshold = ui->temperatureSpin->value();
    humidityThreshold = ui->humiditySpin->value();
    requiredLightTime = ui->lightTimeSpin->value();

    pumpActive = (soilMoisture < soilMoistureThreshold);
    humidifierActive = (temperature > temperatureThreshold) || (humidity < humidityThreshold);

    updateUI();
}

void MainWindow::updateLightTimer()
{
    if (lightValue > lightThreshold) {
        naturalLightDuration++;
    }

    if (lampActive) {
        artificialLightDuration++;
    }

    int requiredSeconds = requiredLightTime * 3600;
    int totalLight = naturalLightDuration + artificialLightDuration;

    lampActive = (totalLight < requiredSeconds);

    int remaining = requiredSeconds - totalLight;
    remaining = remaining > 0 ? remaining : 0;

    int hours = remaining / 3600;
    int minutes = (remaining % 3600) / 60;

    ui->lightRemainingLabel->setText(
        QString("%1:%2")
            .arg(hours, 2, 10, QLatin1Char('0'))
            .arg(minutes, 2, 10, QLatin1Char('0'))
    );
}
