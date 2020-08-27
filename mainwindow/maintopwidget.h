#ifndef MAINTOPWIDGET_H
#define MAINTOPWIDGET_H

#include <QPushButton>
#include <QLabel>

#include "common/zbasestylewidget.h"
#include "common/zsearchlineedit.h"

class MainTopWidget : public ZBaseStyleWidget
{
    Q_OBJECT
public:
    explicit MainTopWidget(QWidget *parent = 0);

public slots:
signals:
protected:
private slots:
private:
    void initUi();
    void initWidget();
private:
    QPushButton *m_pLogBtn;
    QPushButton *m_pRegisterBtn;
    QPushButton *m_pIconBtn;

    QPushButton *m_pReturnBtn;
    QPushButton *m_pRefreshBtn;
    ZSearchLineEdit *m_pSearchLe;

    QLabel *m_pSeparateLabel_left;
    QLabel *m_pSeparateLabel_right;

    QPushButton *m_pExitBtn;
    QPushButton *m_pMiniBtn;
    QPushButton *m_pMiniFrameBtn;
    QPushButton *m_pMobileBtn;
    QPushButton *m_pSettingBtn;
    QPushButton *m_pSkinBtn;
    QPushButton *m_pMessageBtn;
    QPushButton *m_pPlaycardBtn;
    QPushButton *m_pToolBtn;
    QPushButton *m_pGameBtn;

};

#endif // MAINTOPWIDGET_H
