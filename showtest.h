#ifndef SHOWTEST_H
#define SHOWTEST_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class ShowTest;
}

class ShowTest : public QDialog
{
    Q_OBJECT

public:
    explicit ShowTest(QWidget *parent = 0);
    ~ShowTest();

private slots:
    void btnShowClick();


private:
    Ui::ShowTest *ui;
};

#endif // SHOWTEST_H
