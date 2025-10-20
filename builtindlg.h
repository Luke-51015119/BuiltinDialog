#ifndef BUILTINDLG_H
#define BUILTINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>

class BuiltinDlg : public QDialog
{
    Q_OBJECT

public:
    BuiltinDlg(QWidget *parent = nullptr);
    ~BuiltinDlg();
private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
};
#endif // BUILTINDLG_H
