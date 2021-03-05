#ifndef MESSENGERCONNECTIONDIALOG_H
#define MESSENGERCONNECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class MessengerConnectionDialog;
}

namespace AslihanAkbiyik
{
class MessengerConnectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MessengerConnectionDialog(QWidget *parent = 0);
    ~MessengerConnectionDialog();
    QString hostname() const;
    quint16 port() const;

private slots:
    void on_ok_clicked();
    void on_cancel_clicked();
private:
    Ui::MessengerConnectionDialog *ui;
    QString mHostname;
    quint16 mPort;
};

inline QString MessengerConnectionDialog::hostname() const
{
    return mHostname;
}

inline quint16 MessengerConnectionDialog::port() const
{
    return mPort;
}
} //end of namespace AslihanAkbiyik
#endif // MESSENGERCONNECTIONDIALOG_H
