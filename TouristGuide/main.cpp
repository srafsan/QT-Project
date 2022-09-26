#include "guide.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Guide w;
    w.show();

    return a.exec();
}
