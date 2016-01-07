#include <QCoreApplication>
#include <iostream>
#include <iomanip>
#include "core.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::wcout << setw(20) << "Works!" << endl;

    return a.exec();
}
