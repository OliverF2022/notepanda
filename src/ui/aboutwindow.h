#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <ui_aboutwindow.h>

#include <QDialog>
#include <QGridLayout>
#include <QLabel>
#include <QWidget>

#include "../core/configmanager.h"

class AboutWindow : public QDialog, private Ui::AboutWindow
{
  Q_OBJECT

 public:
  explicit AboutWindow(QWidget *parent = nullptr);

 private:
  Ui::AboutWindow *ui;
  QAction *a_AboutQt;
};

#endif  // ABOUTWINDOW_H
