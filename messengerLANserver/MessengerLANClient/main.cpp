#include "widget.h"

#include <QApplication>

using namespace AslihanAkbiyik;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Widget w;
    w.show();
    return a.exec();
}
