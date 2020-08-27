#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QDesktopWidget>
#include "moudle/ZSingleApplication/zsingleapplication.h"
#include "mainwindow/mainwindow.h"

int main(int argc, char *argv[])
{
    ZSingleApplication app(argc, argv);

    if(!app.isRunning())
    {
//        QFile qss(":/qss/default");
//        qss.open(QFile::ReadOnly);
////        qDebug() << "-------------------" << qss.readAll();
//        qApp->setStyleSheet(qss.readAll());
//        qss.close();
//        qApp->setStyleSheet("QLineEdit{border-radius:13px;background:rgba(255,255,255,180);}");
        MainWindow*pMain = MainWindow::InitInstance();
        app.w = pMain;
        pMain->show();
//        pMain->setGeometry((QApplication::desktop()->width() - pMain->width())/2,(QApplication::desktop()->height() - pMain->height())/2,1008,698);//居中显示
        return app.exec();
    }

    return 0;
}
