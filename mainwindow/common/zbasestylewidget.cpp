#include "zbasestylewidget.h"
#include <QStyleOption>
#include <QPainter>

ZBaseStyleWidget::ZBaseStyleWidget(QWidget *parent) :
    QWidget(parent)
{
}

void ZBaseStyleWidget::paintEvent(QPaintEvent *)
{
//    QStyleOption opt;
//    opt.init(this);
//    QPainter p(this);
//    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}
