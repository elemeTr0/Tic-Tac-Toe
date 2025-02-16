#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
private slots:
    void onCellClicked(); // Slot to handle clicks

private:
    bool win;
    Ui::MainWindow *ui;
    bool turn;
    bool gameOver;
    QWidget* clickedWidget;
    bool checkForWin();
    void disableAllCells();
    bool isBoardFull();
};
#endif // MAINWINDOW_H
