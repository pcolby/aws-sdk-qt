#include "testawssignaturev4.h"

#include "../../src/core/awsbasiccredentials.h"
#include "../../src/core/awssignaturev4.h"
#include "../../src/core/awssignaturev4_p.h"

Q_DECLARE_METATYPE(QCryptographicHash::Algorithm)

void TestAwsSignatureV4::algorithmDesignation_data()
{
    QTest::addColumn<QCryptographicHash::Algorithm>("algorithm");
    QTest::addColumn<QByteArray>("designation");

    QTest::newRow("MD4")    << QCryptographicHash::Md4    << QByteArray("AWS4-HMAC-MD4");
    QTest::newRow("MD5")    << QCryptographicHash::Md5    << QByteArray("AWS4-HMAC-MD5");
    QTest::newRow("SHA1")   << QCryptographicHash::Sha1   << QByteArray("AWS4-HMAC-SHA1");
    QTest::newRow("SHA224") << QCryptographicHash::Sha224 << QByteArray("AWS4-HMAC-SHA224");
    QTest::newRow("SHA256") << QCryptographicHash::Sha256 << QByteArray("AWS4-HMAC-SHA256");
    QTest::newRow("SHA384") << QCryptographicHash::Sha384 << QByteArray("AWS4-HMAC-SHA384");
    QTest::newRow("SHA512") << QCryptographicHash::Sha512 << QByteArray("AWS4-HMAC-SHA512");
}

void TestAwsSignatureV4::algorithmDesignation()
{
    QFETCH(QCryptographicHash::Algorithm, algorithm);
    QFETCH(QByteArray, designation);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    QCOMPARE(signature.algorithmDesignation(algorithm), designation);
}

void TestAwsSignatureV4::stringToSign_data()
{
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

void TestAwsSignatureV4::stringToSign()
{
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
