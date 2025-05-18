#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onTestButtonClicked();
    void updateSensorData();
    void checkConditions();
    void updateLightTimer();

private:
    Ui::MainWindow *ui;
    QTimer *sensorTimer;
    QTimer *lightUpdateTimer;

    // Данные датчиков
    int soilMoisture;
    int lightValue;
    int temperature;
    int humidity;

    // Пороговые значения
    int soilMoistureThreshold;
    int lightThreshold;
    int temperatureThreshold;
    int humidityThreshold;
    int requiredLightTime;

    // Состояния устройств
    bool pumpActive;
    bool lampActive;
    bool humidifierActive;

    // Таймеры освещения
    int naturalLightDuration;
    int artificialLightDuration;

    void generateRandomData();
    void updateUI();
    void setupStyles();
};

#endif // MAINWINDOW_H
