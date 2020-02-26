#include "scores.h"
#include "ui_scores.h"

Scores::Scores(QWidget *parent) :
    QDialog(parent),
    ui_scores(new Ui::Scores)
{
    ui_scores->setupUi(this);
}

Scores::~Scores()
{
    delete ui_scores;
}
