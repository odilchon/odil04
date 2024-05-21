#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QMainWindow>
#include "paintwindow.h"
#include "paintscene.h"

namespace Ui {
    class WelcomeWindow;
}

class WelcomeWindow : public QMainWindow
{
Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);
    ~WelcomeWindow();
    PaintWindow *p = new PaintWindow();
    PaintScene* scene;

private slots:
    void on_newPaintBtn_clicked();
    void on_openPaintBtn_clicked();

private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
