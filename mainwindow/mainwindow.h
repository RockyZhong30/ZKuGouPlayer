#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "common/zshadowwidget.h"
#include "maintopwidget.h"
#include "mainmiddlewidget.h"
#include "mainbottomwidget.h"

class MainWindow : public ZShadowWidget
{
    Q_OBJECT
public:
    ~MainWindow();
//get Instance
   static MainWindow *GetInstance(){return s_pMainWnd;}

//initialize Instance
   static MainWindow * InitInstance();

protected:
   explicit MainWindow(QWidget*parent=0);

   static MainWindow *s_pMainWnd;
public slots:

protected:

signals:
private:
   void initUi();
   void initLayout();

private:
   MainTopWidget *m_pMainTopWidget;
   MainMiddleWidget *m_pMainMiddleWidget;
   MainBottomWidget *m_pMainBottomWidget;
};

#endif // MAINWINDOW_H
