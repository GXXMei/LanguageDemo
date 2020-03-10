#ifndef MIANWINDOW_H
#define MIANWINDOW_H

#include <QWidget>
#include <QTranslator>
#include <QLabel>
#include <showtest.h>
#include  <QHBoxLayout>
namespace Ui {
class MianWindow;
}

class MianWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MianWindow(QWidget *parent = 0);
    ~MianWindow();

private :
    void ReflashUi();
    void BuildConenect();

signals:
private slots:
          void btnSwitchClicked();  //语言切换
          void btnbtnDialogClicked();  //打开窗口
private:
    Ui::MianWindow *ui;
    QTranslator *m_translator;
    QLabel *lbTest;
    QLabel *lbInfo;
    QLabel *lbWel;
    bool m_Chinese;
    QHBoxLayout* tLayout;
};

#endif // MIANWINDOW_H
