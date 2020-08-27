#include <QHBoxLayout>

#include "maintopwidget.h"
#include "common/common.h"

MainTopWidget::MainTopWidget(QWidget *parent) :
    ZBaseStyleWidget(parent)
{
    setMouseTracking(true);
    this->initUi();
    this->initWidget();
}

void MainTopWidget::initUi()
{
    m_pLogBtn = new QPushButton("登陆", this);
    m_pRegisterBtn = new QPushButton("注册", this);
    m_pIconBtn = new QPushButton(this);

    m_pReturnBtn = new QPushButton(this);
    m_pRefreshBtn = new QPushButton(this);
    m_pSearchLe = new ZSearchLineEdit(this);

    m_pSeparateLabel_left = new QLabel("丨", this);
    m_pSeparateLabel_right = new QLabel("丨", this);

    m_pExitBtn = new QPushButton(this);
    m_pMiniBtn = new QPushButton(this);
    m_pMiniFrameBtn = new QPushButton(this);
    m_pMobileBtn = new QPushButton(this);
    m_pSettingBtn = new QPushButton(this);
    m_pSkinBtn = new QPushButton(this);
    m_pMessageBtn = new QPushButton(this);
    m_pPlaycardBtn = new QPushButton(this);
    m_pToolBtn = new QPushButton(this);
    m_pGameBtn = new QPushButton(this);
}

void MainTopWidget::initWidget()
{
    this->setFixedSize(SCREEN_WIDTH, SCREEN_TOP_HEIGHT);
    setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Fixed);

    QHBoxLayout *hmainyout = new QHBoxLayout(this);
///////////////////////////////////////////////////////////////////////////////////////////////////////////first lyout

    QHBoxLayout *hyout1=new QHBoxLayout;
    m_pIconBtn->setFixedSize(45,45);

    m_pLogBtn->setFixedSize(50, 30);
    m_pRegisterBtn->setFixedSize(50, 30);

    m_pSeparateLabel_left->setFixedSize(10,20);
    m_pSeparateLabel_left->adjustSize();
    hyout1->addWidget(m_pIconBtn);
    hyout1->addSpacing(6);
    hyout1->addWidget(m_pLogBtn);
    hyout1->addWidget(m_pSeparateLabel_left);
    hyout1->addWidget(m_pRegisterBtn);
    hyout1->setSpacing(5);
    hyout1->setContentsMargins(0,0,0,0);
////////////////////////////////////////////////////////////////////////////////////////////////////////////second lyout
    QHBoxLayout *hyout2=new QHBoxLayout;
    m_pReturnBtn->setFixedSize(30,30);

    m_pRefreshBtn->setFixedSize(30,30);

    hyout2->addWidget(m_pReturnBtn);
    hyout2->addWidget(m_pRefreshBtn);
    hyout2->addWidget(m_pSearchLe);
    hyout2->setSpacing(20);
    hyout2->setContentsMargins(0,0,0,0);

////////////////////////////////////////////////////////////////////////////////////////////////////////////////third lyout
    QHBoxLayout *hyout3=new QHBoxLayout;


    m_pExitBtn->setFixedSize(28,28);
    m_pMiniBtn->setFixedSize(26,26);
    m_pMiniFrameBtn->setFixedSize(26,26);
    m_pMobileBtn->setFixedSize(26,26);
    m_pSettingBtn->setFixedSize(26,26);
    m_pSkinBtn->setFixedSize(26,26);
    m_pMessageBtn->setFixedSize(26,26);
    m_pPlaycardBtn->setFixedSize(26,26);
    m_pToolBtn->setFixedSize(26,26);
    m_pGameBtn->setFixedSize(26,26);

    m_pExitBtn->setObjectName("m_pExitBtn");
    m_pMiniBtn->setObjectName("m_pMiniBtn");
    m_pMiniFrameBtn->setObjectName("m_pMiniFrameBtn");
    m_pMobileBtn->setObjectName("m_pMobileBtn");
    m_pSettingBtn->setObjectName("m_pSettingBtn");
    m_pSkinBtn->setObjectName("m_pSkinBtn");
    m_pMessageBtn->setObjectName("m_pMessageBtn");
    m_pPlaycardBtn->setObjectName("m_btnplaycard");
    m_pToolBtn->setObjectName("m_pToolBtn");
    m_pGameBtn->setObjectName("m_pGameBtn");


    hyout3->addWidget(m_pToolBtn);
    hyout3->addWidget(m_pPlaycardBtn);
    hyout3->addWidget(m_pGameBtn);
    hyout3->addWidget(m_pMessageBtn);

    hyout3->addWidget(m_pSkinBtn);
    hyout3->addWidget(m_pSettingBtn);
    hyout3->addWidget(m_pSeparateLabel_right);
    hyout3->addWidget(m_pMobileBtn);
    hyout3->addWidget(m_pMiniFrameBtn);
    hyout3->addWidget(m_pMiniBtn);
    hyout3->addWidget(m_pExitBtn);
    hyout3->setSpacing(12);


    hmainyout->addLayout(hyout1);
    hmainyout->addSpacing(190);
    hmainyout->addSpacerItem(new QSpacerItem(80,30,QSizePolicy::Maximum));//设置它最大膨胀！！！
    hmainyout->addLayout(hyout2);
    hmainyout->addSpacerItem(new QSpacerItem(110,30,QSizePolicy::Expanding));//膨胀
    //hmainyout->insertStretch(3,150);
    hmainyout->addLayout(hyout3);
    hmainyout->setSpacing(0);
    hmainyout->setContentsMargins(16,0,15,0);
    setLayout(hmainyout);
}
