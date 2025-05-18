/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *mainLayout;
    QScrollArea *scrollArea;
    QWidget *scrollContent;
    QVBoxLayout *contentLayout;
    QGroupBox *sensorsGroup;
    QGridLayout *sensorsGrid;
    QLabel *labelSoil;
    QLabel *soilMoistureLabel;
    QLabel *labelLight;
    QLabel *lightValueLabel;
    QLabel *labelTemp;
    QLabel *temperatureLabel;
    QLabel *labelHumidity;
    QLabel *humidityLabel;
    QGroupBox *settingsGroup;
    QGridLayout *settingsGrid;
    QLabel *labelMoistureThreshold;
    QSpinBox *soilMoistureSpin;
    QLabel *labelLightThreshold;
    QSpinBox *lightThresholdSpin;
    QLabel *labelTempThreshold;
    QSpinBox *temperatureSpin;
    QLabel *labelHumidityThreshold;
    QSpinBox *humiditySpin;
    QLabel *labelLightTime;
    QSpinBox *lightTimeSpin;
    QGroupBox *statusGroup;
    QGridLayout *statusGrid;
    QLabel *pumpStatus;
    QLabel *lampStatus;
    QLabel *humidifierStatus;
    QLabel *lightRemainingLabel;
    QPushButton *testButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 640);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mainLayout = new QVBoxLayout(centralWidget);
        mainLayout->setSpacing(6);
        mainLayout->setContentsMargins(11, 11, 11, 11);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollContent = new QWidget();
        scrollContent->setObjectName(QStringLiteral("scrollContent"));
        scrollContent->setGeometry(QRect(0, 0, 221, 453));
        contentLayout = new QVBoxLayout(scrollContent);
        contentLayout->setSpacing(6);
        contentLayout->setContentsMargins(11, 11, 11, 11);
        contentLayout->setObjectName(QStringLiteral("contentLayout"));
        sensorsGroup = new QGroupBox(scrollContent);
        sensorsGroup->setObjectName(QStringLiteral("sensorsGroup"));
        sensorsGrid = new QGridLayout(sensorsGroup);
        sensorsGrid->setSpacing(6);
        sensorsGrid->setContentsMargins(11, 11, 11, 11);
        sensorsGrid->setObjectName(QStringLiteral("sensorsGrid"));
        labelSoil = new QLabel(sensorsGroup);
        labelSoil->setObjectName(QStringLiteral("labelSoil"));

        sensorsGrid->addWidget(labelSoil, 0, 0, 1, 1);

        soilMoistureLabel = new QLabel(sensorsGroup);
        soilMoistureLabel->setObjectName(QStringLiteral("soilMoistureLabel"));

        sensorsGrid->addWidget(soilMoistureLabel, 0, 1, 1, 1);

        labelLight = new QLabel(sensorsGroup);
        labelLight->setObjectName(QStringLiteral("labelLight"));

        sensorsGrid->addWidget(labelLight, 1, 0, 1, 1);

        lightValueLabel = new QLabel(sensorsGroup);
        lightValueLabel->setObjectName(QStringLiteral("lightValueLabel"));

        sensorsGrid->addWidget(lightValueLabel, 1, 1, 1, 1);

        labelTemp = new QLabel(sensorsGroup);
        labelTemp->setObjectName(QStringLiteral("labelTemp"));

        sensorsGrid->addWidget(labelTemp, 2, 0, 1, 1);

        temperatureLabel = new QLabel(sensorsGroup);
        temperatureLabel->setObjectName(QStringLiteral("temperatureLabel"));

        sensorsGrid->addWidget(temperatureLabel, 2, 1, 1, 1);

        labelHumidity = new QLabel(sensorsGroup);
        labelHumidity->setObjectName(QStringLiteral("labelHumidity"));

        sensorsGrid->addWidget(labelHumidity, 3, 0, 1, 1);

        humidityLabel = new QLabel(sensorsGroup);
        humidityLabel->setObjectName(QStringLiteral("humidityLabel"));

        sensorsGrid->addWidget(humidityLabel, 3, 1, 1, 1);


        contentLayout->addWidget(sensorsGroup);

        settingsGroup = new QGroupBox(scrollContent);
        settingsGroup->setObjectName(QStringLiteral("settingsGroup"));
        settingsGrid = new QGridLayout(settingsGroup);
        settingsGrid->setSpacing(6);
        settingsGrid->setContentsMargins(11, 11, 11, 11);
        settingsGrid->setObjectName(QStringLiteral("settingsGrid"));
        labelMoistureThreshold = new QLabel(settingsGroup);
        labelMoistureThreshold->setObjectName(QStringLiteral("labelMoistureThreshold"));

        settingsGrid->addWidget(labelMoistureThreshold, 0, 0, 1, 1);

        soilMoistureSpin = new QSpinBox(settingsGroup);
        soilMoistureSpin->setObjectName(QStringLiteral("soilMoistureSpin"));
        soilMoistureSpin->setMaximum(100);

        settingsGrid->addWidget(soilMoistureSpin, 0, 1, 1, 1);

        labelLightThreshold = new QLabel(settingsGroup);
        labelLightThreshold->setObjectName(QStringLiteral("labelLightThreshold"));
        labelLightThreshold->setScaledContents(true);

        settingsGrid->addWidget(labelLightThreshold, 1, 0, 1, 1);

        lightThresholdSpin = new QSpinBox(settingsGroup);
        lightThresholdSpin->setObjectName(QStringLiteral("lightThresholdSpin"));
        lightThresholdSpin->setMaximum(1000);

        settingsGrid->addWidget(lightThresholdSpin, 1, 1, 1, 1);

        labelTempThreshold = new QLabel(settingsGroup);
        labelTempThreshold->setObjectName(QStringLiteral("labelTempThreshold"));

        settingsGrid->addWidget(labelTempThreshold, 2, 0, 1, 1);

        temperatureSpin = new QSpinBox(settingsGroup);
        temperatureSpin->setObjectName(QStringLiteral("temperatureSpin"));
        temperatureSpin->setMinimum(-50);
        temperatureSpin->setMaximum(50);

        settingsGrid->addWidget(temperatureSpin, 2, 1, 1, 1);

        labelHumidityThreshold = new QLabel(settingsGroup);
        labelHumidityThreshold->setObjectName(QStringLiteral("labelHumidityThreshold"));

        settingsGrid->addWidget(labelHumidityThreshold, 3, 0, 1, 1);

        humiditySpin = new QSpinBox(settingsGroup);
        humiditySpin->setObjectName(QStringLiteral("humiditySpin"));
        humiditySpin->setMaximum(100);

        settingsGrid->addWidget(humiditySpin, 3, 1, 1, 1);

        labelLightTime = new QLabel(settingsGroup);
        labelLightTime->setObjectName(QStringLiteral("labelLightTime"));

        settingsGrid->addWidget(labelLightTime, 4, 0, 1, 1);

        lightTimeSpin = new QSpinBox(settingsGroup);
        lightTimeSpin->setObjectName(QStringLiteral("lightTimeSpin"));
        lightTimeSpin->setMaximum(24);

        settingsGrid->addWidget(lightTimeSpin, 4, 1, 1, 1);


        contentLayout->addWidget(settingsGroup);

        statusGroup = new QGroupBox(scrollContent);
        statusGroup->setObjectName(QStringLiteral("statusGroup"));
        statusGroup->setEnabled(true);
        statusGrid = new QGridLayout(statusGroup);
        statusGrid->setSpacing(6);
        statusGrid->setContentsMargins(11, 11, 11, 11);
        statusGrid->setObjectName(QStringLiteral("statusGrid"));
        pumpStatus = new QLabel(statusGroup);
        pumpStatus->setObjectName(QStringLiteral("pumpStatus"));

        statusGrid->addWidget(pumpStatus, 0, 0, 1, 1);

        lampStatus = new QLabel(statusGroup);
        lampStatus->setObjectName(QStringLiteral("lampStatus"));

        statusGrid->addWidget(lampStatus, 0, 1, 1, 1);

        humidifierStatus = new QLabel(statusGroup);
        humidifierStatus->setObjectName(QStringLiteral("humidifierStatus"));

        statusGrid->addWidget(humidifierStatus, 1, 0, 1, 1);

        lightRemainingLabel = new QLabel(statusGroup);
        lightRemainingLabel->setObjectName(QStringLiteral("lightRemainingLabel"));

        statusGrid->addWidget(lightRemainingLabel, 1, 1, 1, 1);


        contentLayout->addWidget(statusGroup);

        testButton = new QPushButton(scrollContent);
        testButton->setObjectName(QStringLiteral("testButton"));

        contentLayout->addWidget(testButton);

        scrollArea->setWidget(scrollContent);

        mainLayout->addWidget(scrollArea);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\243\320\274\320\275\320\260\321\217 \321\202\320\265\320\277\320\273\320\270\321\206\320\260", 0));
        sensorsGroup->setTitle(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", 0));
        labelSoil->setText(QApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\321\207\320\262\321\213:", 0));
        labelLight->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\262\320\265\321\211\320\265\320\275\320\275\320\276\321\201\321\202\321\214:", 0));
        labelTemp->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260:", 0));
        labelHumidity->setText(QApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214 \320\262\320\276\320\267\320\264\321\203\321\205\320\260:", 0));
        settingsGroup->setTitle(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", 0));
        labelMoistureThreshold->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\200\320\276\320\263 \320\277\320\276\320\273\320\270\320\262\320\260 (%):", 0));
        labelLightThreshold->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\200\320\276\320\263 \321\201\320\262\320\265\321\202\320\260 (lux):", 0));
        labelTempThreshold->setText(QApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201. \321\202\320\265\320\274\320\277. (\302\260C):", 0));
        labelHumidityThreshold->setText(QApplication::translate("MainWindow", "\320\234\320\270\320\275. \320\262\320\273\320\260\320\266. (%):", 0));
        labelLightTime->setText(QApplication::translate("MainWindow", "\320\241\320\262\320\265\321\202\320\276\320\262\320\276\320\271 \320\264\320\265\320\275\321\214 (\321\207):", 0));
        statusGroup->setTitle(QApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", 0));
        testButton->setText(QApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202 \320\264\320\260\321\202\321\207\320\270\320\272\320\276\320\262", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
