#include "testawssignaturev2.h"

#include "../../src/core/awssignaturev2.h"

#include <QtNetwork/QNetworkRequest>

void TestAwsSignatureV2::sign_data() {
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QByteArray>("data");
    //QTest::addColumn<AwsBasicCredentials>("credentials");

    QTest::newRow("null") << QNetworkRequest() << QByteArray();
}

void TestAwsSignatureV2::sign() {
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, data);
    //QFETCH(QString, credentials);

    QVERIFY(true); ///< @todo
}
