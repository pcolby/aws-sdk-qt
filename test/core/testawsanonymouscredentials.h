#include <QtTest/QtTest>

class TestAwsAnonymousCredentials : public QObject {
    Q_OBJECT

private slots:
    void accessKeyId();
    void secretKey();
    void token();

    void expiration();
    void isExpired();
    void isRefreshable();

    void refresh();

};
