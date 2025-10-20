#include "builtindlg.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BuiltinDlg w;
    w.show();
    return a.exec();
}
