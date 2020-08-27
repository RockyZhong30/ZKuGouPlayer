#include <QVBoxLayout>

#include "mainwindow.h"
#include "common/common.h"


MainWindow *MainWindow::s_pMainWnd=NULL;

MainWindow*MainWindow::InitInstance()
{
    if(!s_pMainWnd)
        s_pMainWnd = new MainWindow;
    return s_pMainWnd;
}

MainWindow::MainWindow(QWidget *parent)
    : ZShadowWidget(parent)
{
    s_pMainWnd = this;

    this->initUi();
    this->initLayout();           //加载主要layout
}

MainWindow::~MainWindow()
{

}

void MainWindow::initUi()
{
    this->setFixedSize(SCREEN_WIDTH, SCREEN_HEIGHT);
    m_pMainTopWidget = new MainTopWidget(this);
    m_pMainMiddleWidget = new MainMiddleWidget(this);
    m_pMainBottomWidget = new MainBottomWidget(this);
}

void MainWindow::initLayout()
{
    QVBoxLayout *vlyout=new QVBoxLayout;
    vlyout->addWidget(m_pMainTopWidget);
    vlyout->addWidget(m_pMainMiddleWidget);
    vlyout->addWidget(m_pMainBottomWidget);
    vlyout->setSpacing(0);
    vlyout->setContentsMargins(0,0,0,0);
    this->setLayout(vlyout);
}
