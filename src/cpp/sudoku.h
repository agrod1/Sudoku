#ifndef SUDOKU_H
#define SUDOKU_H

#include <QMainWindow>

namespace Ui {
class Sudoku;
}

class Sudoku : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sudoku(QWidget *parent = nullptr);
    ~Sudoku();

private:
    Ui::Sudoku *ui;
};

#endif // SUDOKU_H
