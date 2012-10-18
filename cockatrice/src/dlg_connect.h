#ifndef DLG_CONNECT_H
#define DLG_CONNECT_H

#include <QDialog>
#include <QLineEdit>

class QLabel;
class QPushButton;
class QCheckBox;

class DlgConnect : public QDialog {
	Q_OBJECT
public:
	DlgConnect(QWidget *parent = 0);
	QString getHost() const { return hostEdit->text(); }
	int getPort() const { return portEdit->text().toInt(); }
	QString getPlayerName() const { return playernameEdit->text(); }
	QString getPassword() const { return passwordEdit->text(); }
	QString getProxy() const { return proxyEdit->text(); }
	int getProxyPort() const { return proxyPortEdit->text().toInt(); }
	QString getProxyUser() const { return proxyUserEdit->text(); }
	QString getProxyPassword() const { return proxyPasswordEdit->text(); }
private slots:
	void actOk();
private:
	QLabel *hostLabel, *portLabel, *playernameLabel, *passwordLabel, *proxyLabel, *proxyPortLabel, *proxyUserLabel, *proxyPasswordLabel;
	QLineEdit *hostEdit, *portEdit, *playernameEdit, *passwordEdit, *proxyEdit, *proxyPortEdit, *proxyUserEdit, *proxyPasswordEdit;
	QCheckBox *savePasswordCheckBox, *saveProxySettingsCheckBox;
};

#endif
