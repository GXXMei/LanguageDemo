#include "mianwindow.h"
#include "ui_mianwindow.h"

MianWindow::MianWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MianWindow)
{
    ui->setupUi(this);
    m_translator = new QTranslator;
    m_Chinese = true;
    lbTest = new QLabel;
    lbInfo = new QLabel;
    lbWel = new QLabel;
   tLayout = new QHBoxLayout;
    ReflashUi();
   tLayout->addWidget(lbTest, 0 , Qt::AlignTop);
   tLayout->addWidget(lbInfo, 0 , Qt::AlignTop);
   tLayout->addWidget(lbWel, 0 , Qt::AlignTop);
   setLayout(tLayout);
    BuildConenect();
}

MianWindow::~MianWindow()
{
    delete ui;
}

void MianWindow::ReflashUi()
{
    this->setWindowTitle(tr("主界面"));
    lbTest->setText(tr("这是一个动态多语言测试"));
    lbInfo->setText(tr("好好学习，天天向上"));
    lbWel->setText(tr("不积跬步无以至千里"));
}

void MianWindow::BuildConenect()
{
    connect(ui->btnSwitch, SIGNAL(clicked()), this, SLOT(btnSwitchClicked()));
    connect(ui->btnDialog, SIGNAL(clicked()), this, SLOT(btnbtnDialogClicked()));
}

void MianWindow::btnSwitchClicked()
{
    QString exePath = ":/language";  //qm存放的路径
       QString QmName;
       if(m_Chinese){
           m_Chinese = false;
           QmName = "LanguageDemo_zh";
       }else{
           m_Chinese = true;
           QmName = "LanguageDemo_en";
       }
       if(m_translator->load(QmName, exePath)){  //文件是否存在
           qApp->installTranslator(m_translator);  //加载语言， qApp是个宏,可自行百度了解
       }
       ui->retranslateUi(this);  //不要忘了这一个函数，系统自带的
       ReflashUi();  //对于在构造函数中 初始化的词条，需要在加载一次
}

void MianWindow::btnbtnDialogClicked()
{
      ShowTest *temp = new ShowTest(this);
      temp->exec();
}
