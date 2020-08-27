#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>

#include "zsearchlineedit.h"
#include "common/common.h"

ZSearchLineEdit::ZSearchLineEdit(QWidget *parent)
    :QLineEdit(parent),
      m_SearchFlag(false)
{
    this->setFixedSize(SCREEN_SEARCH_LE_WIDTH, SCREEN_SEARCH_LE_HEIGHT);
    this->setFocusPolicy(Qt::ClickFocus);
    this->setAttribute(Qt::WA_MacShowFocusRect, 0);


    m_pSearchBtn = new QPushButton(this);
    m_pSearchBtn->setFixedSize(SCREEN_SEARCH_LE_WIDTH/2, SCREEN_SEARCH_LE_HEIGHT);
    m_pSearchBtn->setCursor(Qt::ArrowCursor);

    QMargins margins = this->textMargins();
    this->setTextMargins(margins.left()+SCREEN_SEARCH_LE_WIDTH/2, margins.top(), margins.right(), margins.bottom());
    this->setPlaceholderText(tr("搜索"));
    this->setStyleSheet("border-radius:13px;background:rgba(255,255,255,180);");

    QHBoxLayout *pSearchLayout = new QHBoxLayout();
    pSearchLayout->addWidget(m_pSearchBtn);
    pSearchLayout->addStretch();
    pSearchLayout->setSpacing(0);
    pSearchLayout->setContentsMargins(0, 0, 0, 0);
    this->setLayout(pSearchLayout);

    this->setObjectName("ZSearchLineEdit");

    m_pSearchBtn->setStyleSheet("background-image: url(:/image/search_bg);background-position:right;background-repeat:no-repeat;");


    this->installEventFilter(this);

//    connect(m_pSearchBtn, SIGNAL(clicked(bool)), this, SLOT(search()));

}

void ZSearchLineEdit::search()
{
    if(!m_SearchFlag)
    {
        m_pSearchBtn->setFixedSize(SCREEN_SEARCH_BTN_WIDTH, SCREEN_SEARCH_BTN_HEIGHT);
        this->setTextMargins(SCREEN_SEARCH_BTN_WIDTH, 0, 0, 0);
        this->setPlaceholderText("");
        m_SearchFlag = true;
    }
}

bool ZSearchLineEdit::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type() == QEvent::MouseButtonPress)
    {
        search();
    }
    return QObject::eventFilter(obj, event);
}

