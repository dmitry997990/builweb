#ifndef CORE_H
#define CORE_H

#include <QString>
#include <QFile>
#include <QDir>
#include <QSettings>

//главный класс приложения
class Main
{
public:
    Main();
    static bool Init();
    static QString version();
};

#endif // CORE_H
