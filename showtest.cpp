#include "showtest.h"
#include "ui_showtest.h"

ShowTest::ShowTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowTest)
{
    ui->setupUi(this);
    connect(ui->btnShow, SIGNAL(clicked()), this, SLOT(btnShowClick()));
}

ShowTest::~ShowTest()
{
    delete ui;
}

void ShowTest::btnShowClick()
{
    QMessageBox::warning(this, tr("警告"), tr("查看是否切换成功"));
    return;
}
