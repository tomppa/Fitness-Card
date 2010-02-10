#include <QtGui/QApplication>
#include "fitnesscard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FitnessCard w;
    w.show();
    return a.exec();
}
