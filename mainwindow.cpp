#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    turn = true; // X starts
    gameOver = false;
    win=false;

    ui->winner->setText("X Turn");

    ui->gridLayout_2->setContentsMargins(0, 0, 0, 0);

    // Widget Styles (Borders)
    ui->widget00->setStyleSheet("background-color: white;border: 2px solid black; border-top: none; border-left:none");
    ui->widget01->setStyleSheet("background-color: white;border-bottom: 2px solid black;border-left: 2px solid black;border-right: 2px solid black");
    ui->widget02->setStyleSheet("background-color: white;border-bottom: 2px solid black; border-left:2px solid black");

    ui->widget10->setStyleSheet("background-color: white;border: 2px solid black;border-left:none");
    ui->widget11->setStyleSheet("background-color: white;border: 2px solid black");
    ui->widget12->setStyleSheet("background-color: white;border: 2px solid black; border-right:none");

    ui->widget20->setStyleSheet("background-color: white;border: 2px solid black; border-bottom: none; border-left:none");
    ui->widget21->setStyleSheet("background-color: white;border: 2px solid black; border-bottom: none");
    ui->widget22->setStyleSheet("background-color: white;border-top: 2px solid black; border-left:2px solid black");

    // Initial label styling - CORRECT UI ELEMENT NAMES
    ui->winner->setAlignment(Qt::AlignCenter);
    ui->label_1->setAlignment(Qt::AlignCenter);
    ui->label_2->setAlignment(Qt::AlignCenter);
    ui->label_3->setAlignment(Qt::AlignCenter);
    ui->label_4->setAlignment(Qt::AlignCenter);
    ui->label_5->setAlignment(Qt::AlignCenter);
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label_8->setAlignment(Qt::AlignCenter);
    ui->label_9->setAlignment(Qt::AlignCenter);

    ui->winner->setStyleSheet("border: none; font-size:30px;");
    ui->label_1->setStyleSheet("border: none; font-size:30px;");
    ui->label_2->setStyleSheet("border: none; font-size:30px;");
    ui->label_3->setStyleSheet("border: none; font-size:30px;");
    ui->label_4->setStyleSheet("border: none; font-size:30px;");
    ui->label_5->setStyleSheet("border: none; font-size:30px;");
    ui->label_6->setStyleSheet("border: none; font-size:30px;");
    ui->label_7->setStyleSheet("border: none; font-size:30px;");
    ui->label_8->setStyleSheet("border: none; font-size:30px;");
    ui->label_9->setStyleSheet("border: none; font-size:30px;");

    // Size policies
    ui->winner->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_1->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_2->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_4->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_5->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_6->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_7->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_8->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label_9->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // Install event filters
    ui->widget00->installEventFilter(this);
    ui->widget01->installEventFilter(this);
    ui->widget02->installEventFilter(this);
    ui->widget10->installEventFilter(this);
    ui->widget11->installEventFilter(this);
    ui->widget12->installEventFilter(this);
    ui->widget20->installEventFilter(this);
    ui->widget21->installEventFilter(this);
    ui->widget22->installEventFilter(this);

    clickedWidget = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event){
    if (event->type() == QEvent::MouseButtonPress && !gameOver) {
        clickedWidget = static_cast<QWidget*>(obj);
        onCellClicked();
        return true;
    } else {
        return QMainWindow::eventFilter(obj, event);
    }
}

void MainWindow::onCellClicked()
{
    if (!clickedWidget->isEnabled()) {
        return;  // Exit the function if the widget is disabled
    }

    QLabel* label = nullptr;

    if (clickedWidget == ui->widget00) {
        label = ui->label_1;
    } else if (clickedWidget == ui->widget01) {
        label = ui->label_2;
    } else if (clickedWidget == ui->widget02) {
        label = ui->label_3;
    } else if (clickedWidget == ui->widget10) {
        label = ui->label_4;
    } else if (clickedWidget == ui->widget11) {
        label = ui->label_5;
    } else if (clickedWidget == ui->widget12) {
        label = ui->label_6;
    } else if (clickedWidget == ui->widget20) {
        label = ui->label_7;
    } else if (clickedWidget == ui->widget21) {
        label = ui->label_8;
    } else if (clickedWidget == ui->widget22) {
        label = ui->label_9;
    }

    if (label) {
        if (turn) {
            label->setText("X");
            label->setStyleSheet("color: red; border: none; font-size:30px; qproperty-alignment: AlignCenter;"); //Red Style
        } else {
            label->setText("O");
            label->setStyleSheet("color: blue; border: none; font-size:30px; qproperty-alignment: AlignCenter;"); //Blue Style
        }
        clickedWidget->setEnabled(false);
        bool win = false;
        win = checkForWin();

        if (win)
        {
            if(turn)
                ui->winner->setText("X WINS");
            else
                ui->winner->setText("O WINS");
            gameOver=true;
            disableAllCells();
        }
        else if (isBoardFull())
        {
            ui->winner->setText("DRAW!");
            gameOver = true;
            disableAllCells();
        }
        turn = !turn; //Switch Turns
    }
}

bool MainWindow::checkForWin()
{
    // Check horizontal
    if ((ui->label_1->text() == ui->label_2->text() && ui->label_2->text() == ui->label_3->text() && !ui->label_1->text().isEmpty() && !ui->label_2->text().isEmpty() && !ui->label_3->text().isEmpty()) ||
        (ui->label_4->text() == ui->label_5->text() && ui->label_5->text() == ui->label_6->text() && !ui->label_4->text().isEmpty() && !ui->label_5->text().isEmpty() && !ui->label_6->text().isEmpty()) ||
        (ui->label_7->text() == ui->label_8->text() && ui->label_8->text() == ui->label_9->text() && !ui->label_7->text().isEmpty() && !ui->label_8->text().isEmpty() && !ui->label_9->text().isEmpty()) ||
        // Check vertical
        (ui->label_1->text() == ui->label_4->text() && ui->label_4->text() == ui->label_7->text() && !ui->label_1->text().isEmpty() && !ui->label_4->text().isEmpty() && !ui->label_7->text().isEmpty()) ||
        (ui->label_2->text() == ui->label_5->text() && ui->label_5->text() == ui->label_8->text() && !ui->label_2->text().isEmpty() && !ui->label_5->text().isEmpty() && !ui->label_8->text().isEmpty()) ||
        (ui->label_3->text() == ui->label_6->text() && ui->label_6->text() == ui->label_9->text() && !ui->label_3->text().isEmpty() && !ui->label_6->text().isEmpty() && !ui->label_9->text().isEmpty()) ||
        // Check diagonal
        (ui->label_1->text() == ui->label_5->text() && ui->label_5->text() == ui->label_9->text() && !ui->label_1->text().isEmpty() && !ui->label_5->text().isEmpty() && !ui->label_9->text().isEmpty()) ||
        (ui->label_3->text() == ui->label_5->text() && ui->label_5->text() == ui->label_7->text() && !ui->label_3->text().isEmpty() && !ui->label_5->text().isEmpty() && !ui->label_7->text().isEmpty()))
    {
        return true;
    }
    return false;
}

bool MainWindow::isBoardFull() {
    // Check if all cells are filled
    return (!ui->widget00->isEnabled() && !ui->widget01->isEnabled() && !ui->widget02->isEnabled() &&
            !ui->widget10->isEnabled() && !ui->widget11->isEnabled() && !ui->widget12->isEnabled() &&
            !ui->widget20->isEnabled() && !ui->widget21->isEnabled() && !ui->widget22->isEnabled());
}

void MainWindow::disableAllCells() {
    ui->widget00->setEnabled(false);
    ui->widget01->setEnabled(false);
    ui->widget02->setEnabled(false);
    ui->widget10->setEnabled(false);
    ui->widget11->setEnabled(false);
    ui->widget12->setEnabled(false);
    ui->widget20->setEnabled(false);
    ui->widget21->setEnabled(false);
    ui->widget22->setEnabled(false);
}
