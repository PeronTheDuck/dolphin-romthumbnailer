#ifndef CONFIGUI_H
#define CONFIGUI_H

#include <QWidget>

namespace Ui {
class ConfigUi;
}

class ConfigUi : public QWidget
{
    Q_OBJECT

public:
    explicit ConfigUi(QWidget *parent = nullptr);
    ~ConfigUi();

private:
    Ui::ConfigUi *ui;
};

#endif // CONFIGUI_H
