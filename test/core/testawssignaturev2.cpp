#include "testawssignaturev2.h"

#include "../../src/core/awsbasiccredentials.h"
#include "../../src/core/awssignaturev2.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

void TestAwsSignatureV2::sign_data() {
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QString>("securityToken");
    QTest::addColumn<QByteArray>("data");
    QTest::addColumn<QNetworkRequest>("expected");

    QTest::newRow("null") << QNetworkAccessManager::GetOperation << QNetworkRequest()
                          << QString("") << QString("") << QString("")
                          << QByteArray() << QNetworkRequest();
}

void TestAwsSignatureV2::sign() {
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, securityToken);
    QFETCH(QByteArray, data);
    QFETCH(QNetworkRequest, expected);

    const AwsBasicCredentials credentials(accessKeyId, secretKey, securityToken);

    AwsSignatureV2 signature;
    signature.sign(operation, request, credentials, data);
    QCOMPARE(request, expected);

    QBENCHMARK {
        QFETCH(QNetworkRequest, request);
        signature.sign(operation, request, credentials, data);
    }
}
