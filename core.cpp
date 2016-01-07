#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <QFile>
#include <QDir>
#include "core.h"

//описание класса Saver
Saver::Saver()
{
    QCoreApplication::setOrganizationName("Freedom");
    QCoreApplication::setOrganizationDomain("...");
    QCoreApplication::setApplicationName("BuilWeb");
    QSettings settings;
    if(settings.value("proj_name").toString() != "")
    {
        MainInfo::proj_name = settings.value("proj_name").toString();
        MainInfo::aim_dir = settings.value("aim_dir").toString();
        MainInfo::root_dir = settings.value("root_dir").toString();
    }
}
void Saver::setRootDir(QString dir)
{
    QSettings settings;
    settings.setValue("root_dir", dir);
}
void Saver::setProjName(QString dir)
{
    QSettings settings;
    settings.setValue("proj_name", dir);
    MainInfo::proj_name = dir;
}
void Saver::setAimDir(QString dir)
{
    QSettings settings;
    settings.setValue("aim_dir", dir);
    MainInfo::aim_dir = dir;
}
QString Saver::getAimDir()
{
    return MainInfo::aim_dir;
}
QString Saver::getProjName()
{
    return MainInfo::proj_name;
}
QString Saver::getRootDir()
{
    return MainInfo::root_dir;
}
