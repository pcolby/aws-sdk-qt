#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsBasicCredentials : public QObject {
    Q_OBJECT

private slots:
    void construct_data();
    void construct();

    void expiration();
    void isExpired();
    void isRefreshable();
    void refresh();

    void setAccessKeyId_data();
    void setAccessKeyId();

    void setSecretKey_data();
    void setSecretKey();

    void setToken_data();
    void setToken();
};
