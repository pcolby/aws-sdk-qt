#include "testawssignaturev4.h"

#include "../../src/core/awsbasiccredentials.h"
#include "../../src/core/awssignaturev4.h"
#include "../../src/core/awssignaturev4_p.h"

Q_DECLARE_METATYPE(QCryptographicHash::Algorithm)
Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)
Q_DECLARE_METATYPE(QUrlQuery)

void TestAwsSignatureV4::algorithmDesignation_data()
{
    QTest::addColumn<QCryptographicHash::Algorithm>("algorithm");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("MD4")    << QCryptographicHash::Md4    << QByteArray("AWS4-HMAC-MD4");
    QTest::newRow("MD5")    << QCryptographicHash::Md5    << QByteArray("AWS4-HMAC-MD5");
    QTest::newRow("SHA1")   << QCryptographicHash::Sha1   << QByteArray("AWS4-HMAC-SHA1");
    QTest::newRow("SHA224") << QCryptographicHash::Sha224 << QByteArray("AWS4-HMAC-SHA224");
    QTest::newRow("SHA256") << QCryptographicHash::Sha256 << QByteArray("AWS4-HMAC-SHA256");
    QTest::newRow("SHA384") << QCryptographicHash::Sha384 << QByteArray("AWS4-HMAC-SHA384");
    QTest::newRow("SHA512") << QCryptographicHash::Sha512 << QByteArray("AWS4-HMAC-SHA512");

    QTest::newRow("SHA3_224") << QCryptographicHash::Sha3_224 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA3_256") << QCryptographicHash::Sha3_256 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA3_384") << QCryptographicHash::Sha3_384 << QByteArray("invalid-algorithm");
    QTest::newRow("SHA3_512") << QCryptographicHash::Sha3_512 << QByteArray("invalid-algorithm");
}

void TestAwsSignatureV4::algorithmDesignation()
{
    QFETCH(QCryptographicHash::Algorithm, algorithm);
    QFETCH(QByteArray, expected);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    const QByteArray designation = signature.algorithmDesignation(algorithm);
    QCOMPARE(QString::fromUtf8(designation), QString::fromUtf8(expected));
    QCOMPARE(designation, expected);
}

void TestAwsSignatureV4::canonicalHeader_data()
{
    QTest::addColumn<QByteArray>("headerName");
    QTest::addColumn<QByteArray>("headerValue");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("null") << QByteArray() << QByteArray() << QByteArray(":");

    // Examples from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
    QTest::newRow("host")
        << QByteArray("host")
        << QByteArray("iam.amazonaws.com")
        << QByteArray("host:iam.amazonaws.com");

    QTest::newRow("Content-type")
        << QByteArray("Content-type")
        << QByteArray("application/x-www-form-urlencoded; charset=utf-8")
        << QByteArray("content-type:application/x-www-form-urlencoded; charset=utf-8");

    QTest::newRow("My-header1")
        << QByteArray("My-header1")
        << QByteArray("    a   b   c ")
        << QByteArray("my-header1:a b c");

    QTest::newRow("x-amz-date")
        << QByteArray("x-amz-date")
        << QByteArray("20120228T030031Z")
        // Note, this is not the same date as the example; our test is more strict ;)
        << QByteArray("x-amz-date:20120228T030031Z");

    QTest::newRow("My-Header2")
        << QByteArray("My-Header2")
        << QByteArray("    \"a   b   c\"")
        << QByteArray("my-header2:\"a   b   c\"");

    // A few general test cases.
    QTest::newRow("test1")
        << QByteArray("UPPER")
        << QByteArray("   1   2   3   \"    4   5   6   \"   7   8   9   \"   A   B   C   \"   ")
        << QByteArray("upper:1 2 3 \"    4   5   6   \" 7 8 9 \"   A   B   C   \"");
}

void TestAwsSignatureV4::canonicalHeader()
{
    QFETCH(QByteArray, headerName);
    QFETCH(QByteArray, headerValue);
    QFETCH(QByteArray, expected);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    const QByteArray header = signature.canonicalHeader(headerName, headerValue);
    QCOMPARE(QString::fromUtf8(header), QString::fromUtf8(expected));
    QCOMPARE(header, expected);

    QBENCHMARK {
        signature.canonicalHeader(headerName, headerValue);
    }
}

void TestAwsSignatureV4::canonicalHeaders_data()
{
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QByteArray>("expectedHeaders");
    QTest::addColumn<QByteArray>("expectedSignedHeaders");

    QTest::newRow("null") << QNetworkRequest() << QByteArray("host:\n") << QByteArray("host");

    { // Example from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
        QNetworkRequest request(QUrl("http://iam.amazonaws.com/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=utf-8");
        request.setRawHeader("x-amz-date", "20110909T233600Z");
        QTest::newRow("official")
            << request
            << QByteArray(
                "content-type:application/x-www-form-urlencoded; charset=utf-8\n"
                "host:iam.amazonaws.com\n"
                "x-amz-date:20110909T233600Z\n")
            << QByteArray("content-type;host;x-amz-date");
    }
}

void TestAwsSignatureV4::canonicalHeaders()
{
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, expectedHeaders);
    QFETCH(QByteArray, expectedSignedHeaders);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    QByteArray signedHeaders;
    const QByteArray headers = signature.canonicalHeaders(request, &signedHeaders);
    QCOMPARE(QString::fromUtf8(headers), QString::fromUtf8(expectedHeaders));
    QCOMPARE(headers, expectedHeaders);
    QCOMPARE(QString::fromUtf8(signedHeaders), QString::fromUtf8(expectedSignedHeaders));
    QCOMPARE(signedHeaders, expectedSignedHeaders);
}

void TestAwsSignatureV4::canonicalRequest_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation> ("operation");
    QTest::addColumn<QNetworkRequest>("request");
    QTest::addColumn<QByteArray>("payload");
    QTest::addColumn<QByteArray>("expectedRequest");
    QTest::addColumn<QByteArray>("expectedSignedHeaders");

    QTest::newRow("null")
        << QNetworkAccessManager::PostOperation
        << QNetworkRequest()
        << QByteArray()
        << QByteArray(
            "POST\n"
            "/\n\n"
            "host:\n\n"
            "host\n"
            "e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855")
        << QByteArray("host");

    { // Example from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-canonical-request.html
        QNetworkRequest request(QUrl("http://iam.amazonaws.com/"));
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=utf-8");
        request.setRawHeader("x-amz-date", "20110909T233600Z");
        QTest::newRow("official")
            << QNetworkAccessManager::PostOperation
            << request
            << QByteArray("Action=ListUsers&Version=2010-05-08")
            << QByteArray(
                "POST\n"
                "/\n"
                "\n"
                "content-type:application/x-www-form-urlencoded; charset=utf-8\n"
                "host:iam.amazonaws.com\n"
                "x-amz-date:20110909T233600Z\n"
                "\n"
                "content-type;host;x-amz-date\n"
                "b6359072c78d70ebee1e81adcbab4f01bf2c23245fa365ef83fe8f1f955085e2")
            << QByteArray("content-type;host;x-amz-date");
    }
}

void TestAwsSignatureV4::canonicalRequest()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QNetworkRequest, request);
    QFETCH(QByteArray, payload);
    QFETCH(QByteArray, expectedRequest);
    QFETCH(QByteArray, expectedSignedHeaders);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    QByteArray signedHeaders;
    const QByteArray canonicalRequest = signature.canonicalRequest(operation, request, payload, &signedHeaders);
    QCOMPARE(QString::fromUtf8(canonicalRequest), QString::fromUtf8(expectedRequest));
    QCOMPARE(canonicalRequest, expectedRequest);
    QCOMPARE(QString::fromUtf8(signedHeaders), QString::fromUtf8(expectedSignedHeaders));
    QCOMPARE(signedHeaders, expectedSignedHeaders);

}

void TestAwsSignatureV4::TestAwsSignatureV4::stringToSign_data()
{
    QTest::addColumn<QByteArray>("algorithmDesignation");
    QTest::addColumn<QDateTime> ("requestDate");
    QTest::addColumn<QByteArray>("credentialScope");
    QTest::addColumn<QByteArray>("canonicalRequest");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("null")
        << QByteArray()
        << QDateTime()
        << QByteArray()
        << QByteArray()
        << QByteArray("\n\n\ne3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855");

    // Example from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
    QTest::newRow("official")
        << QByteArray("AWS4-HMAC-SHA256")
        << QDateTime::fromString("20110909T233600Z", "yyyyMMddThhmmssZ")
        << QByteArray("20110909/us-east-1/iam/aws4_request")
        << QByteArray(
            "POST\n"
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

void TestAwsSignatureV4::credentialScope_data()
{
    QTest::addColumn<QDate>("date");
    QTest::addColumn<QString>("region");
    QTest::addColumn<QString>("service");
    QTest::addColumn<QByteArray>("expected");

    QTest::newRow("null") << QDate() << QString() << QString() << QByteArray("///aws4_request");

    // Example from http://docs.aws.amazon.com/general/latest/gr/sigv4-create-string-to-sign.html
    QTest::newRow("official")
        << QDate::fromString("20110909", "yyyyMMdd")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("iam")
        << QByteArray("20110909/us-east-1/iam/aws4_request");
}

void TestAwsSignatureV4::credentialScope()
{
    QFETCH(QDate,      date);
    QFETCH(QString,    region);
    QFETCH(QString,    service);
    QFETCH(QByteArray, expected);

    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    const QByteArray scope = signature.credentialScope(date, region, service);
    QCOMPARE(QString::fromUtf8(scope), QString::fromUtf8(expected));
    QCOMPARE(scope, expected);
}


void TestAwsSignatureV4::signingKey_data()
{
    QTest::addColumn<QString>   ("secretKey");
    QTest::addColumn<QDate>     ("date");
    QTest::addColumn<QString>   ("region");
    QTest::addColumn<QString>   ("service");
    QTest::addColumn<QByteArray>("expected");

    // Example from http://docs.aws.amazon.com/general/latest/gr/sigv4-calculate-signature.html
    QTest::newRow("official")
        << QString::fromLatin1("wJalrXUtnFEMI/K7MDENG+bPxRfiCYEXAMPLEKEY")
        << QDate::fromString("20110909", "yyyyMMdd")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("iam")
        << QByteArray("\x98\xf1\xd8\x89\xfe\xc4\xf4""B""\x1a\xdc""R+""\xab\x0c\xe1\xf8"
                      ".i)""\xc2""b""\xed\x15\xe5\xa9""L""\x90\xef\xd1\xe3\xb0\xe7");
}

void TestAwsSignatureV4::signingKey()
{
    QFETCH(QString,    secretKey);
    QFETCH(QDate,      date);
    QFETCH(QString,    region);
    QFETCH(QString,    service);
    QFETCH(QByteArray, expected);

    const AwsBasicCredentials credentials(QString(), secretKey);
    AwsSignatureV4Private signature(QCryptographicHash::Sha256, NULL);
    const QByteArray signingKey = signature.signingKey(credentials, date, region, service);
    QCOMPARE(signingKey, expected);
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
