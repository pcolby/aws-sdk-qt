#include "testawssignaturev4.h"

#include "../../src/core/awsbasiccredentials.h"
#include "../../src/core/awssignaturev4.h"
#include "../../src/core/awssignaturev4_p.h"

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(QUrlQuery)

void TestAwsSignatureV4::stringToSign_data() {
    QTest::addColumn<QByteArray>("algorithmDesignation");
    QTest::addColumn<QDateTime> ("requestDate");
    QTest::addColumn<QByteArray>("credentialScope");
    QTest::addColumn<QByteArray>("canonicalRequest");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("null") << QByteArray()
                          << QDateTime()
                          << QByteArray()
                          << QByteArray()
                          << QByteArray("\n\n\ne3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");

    // Example from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
    QTest::newRow("official") << QByteArray("AWS4-HMAC-SHA256")
                              << QDateTime::fromString("20110909T233600Z", "yyyyMMddThhmmssZ")
                              << QByteArray("20110909/us-east-1/iam/aws4_request")
                              << QByteArray("POST\n"
                                            "/\n"
                                            "\n"
                                            "content-type:application/x-www-form-urlencoded; charset=utf-8\n"
                                            "host:iam.amazonaws.com\n"
                                            "x-amz-date:20110909T233600Z\n"
                                            "\n"
                                            "content-type;host;x-amz-date\n"
                                            "b6359072c78d70ebee1e81adcbab4f01bf2c23245fa365ef83fe8f1f955085e2")
                              << QByteArray("AWS4-HMAC-SHA256\n"
                                            "20110909T233600Z\n"
                                            "20110909/us-east-1/iam/aws4_request\n"
                                            "3511de7e95d28ecd39e9513b642aee07e54f4941150d8df8bf94b328ef7e55e2");
}

void TestAwsSignatureV4::stringToSign() {
    QFETCH(QByteArray, algorithmDesignation);
    QFETCH(QDateTime,  requestDate);
    QFETCH(QByteArray, credentialScope);
    QFETCH(QByteArray, canonicalRequest);
    QFETCH(QByteArray, expected);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);

    const QByteArray stringToSign = signature.stringToSign(algorithmDesignation, requestDate,
                                                           credentialScope, canonicalRequest);

    QCOMPARE(QString::fromUtf8(stringToSign), QString::fromUtf8(expected));
    QCOMPARE(stringToSign, expected);
}
