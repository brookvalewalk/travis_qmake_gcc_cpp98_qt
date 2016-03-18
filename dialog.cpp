#include "dialog.h"
#include "ui_dialog.h"
#include <QTimer>

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);
  QTimer * const t = new QTimer(this);
  QObject::connect(t, SIGNAL(timeout()), this, SLOT(close()));
  t->setInterval(1000);
  t->start();
}

Dialog::~Dialog()
{
  delete ui;
}
