#ifndef TASKTRACKER_H
#define TASKTRACKER_H

#include <QMainWindow>
#include <QDialog>
#include <QCheckBox>
#include <QGridLayout>
#include <QAbstractButton>
#include <QLabel>
#include <QListWidgetItem>

#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TaskTracker; }
QT_END_NAMESPACE

class TaskTracker : public QMainWindow
{
    Q_OBJECT

public:
    TaskTracker(QWidget *parent = nullptr);
    ~TaskTracker();
    Dialog *inputForm;

private:
    Ui::TaskTracker *ui;
    QList<QListWidgetItem*> tasks; // Highly suggested by https://stackoverflow.com/questions/6602036/qvector-vs-qlist

    void addData();
    void deleteData();
};
#endif // TASKTRACKER_H