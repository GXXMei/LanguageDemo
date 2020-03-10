#include "mianwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MianWindow w;
    w.show();

    return a.exec();
}
