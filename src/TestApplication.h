#pragma once

#include <QApplication>
#include <QScopedPointer>
#include <QSerialPort>
#include "TelemetryReporting.h"
#include "VehicleData.h"
#include "Window.h"

class TestApplication : public QApplication
{
   Q_OBJECT
public:
   TestApplication(int& argc, char** argv);
   virtual ~TestApplication();

private:
   QScopedPointer<QSerialPort> serialPort_;
   QScopedPointer<VehicleData> vehicleData_;
   QScopedPointer<TelemetryReporting> telemetryReporting_;
   QScopedPointer<Window> window_;
};