#ifndef SCORES_H
#define SCORES_H

#include <QDialog>

namespace Ui {
class Scores;
}

class Scores : public QDialog
{
    Q_OBJECT

public:
    explicit Scores(QWidget *parent = nullptr);
    ~Scores();
    Ui::Scores *ui_scores;
};

#endif // SCORES_H
