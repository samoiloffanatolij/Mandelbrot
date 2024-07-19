#include "mandelbrotwidget.h"

#include <QApplication>

#include <QScreen>

#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QDebug>
#include <QRect>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QCommandLineParser parser;
    parser.setApplicationDescription("Mandelbrot Set");
    parser.addHelpOption();
    parser.addVersionOption();
    parser.process(app);
    MandelbrotWidget widget;
    widget.grabGesture(Qt::PinchGesture);
    widget.show();
    return app.exec();
}
