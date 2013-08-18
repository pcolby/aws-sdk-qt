#include <QtTest/QtTest>

class TestAwsAbstractCredentials : public QObject {
    Q_OBJECT

private slots:
    void expiration();
    void isExpired();
    void isRefreshable();
    void refresh();

};
