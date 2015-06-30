/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "testawsabstractsignature.h"

#include "core/awsabstractsignature.h"
#include "core/awsbasiccredentials.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractsignature_p.h"
#endif

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
Q_DECLARE_METATYPE(QUrlQuery)
#endif

namespace TestAwsAbstractSignature_Mocks {

// Bare minimum concrete mock class.
class MockSignature : public AwsAbstractSignature {

public:
    MockSignature() { }

    virtual void sign(const AwsAbstractCredentials &credentials, const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request, const QByteArray &data) const
    {
        Q_UNUSED(operation)
        Q_UNUSED(request)
        Q_UNUSED(credentials)
        Q_UNUSED(data)
    }

    virtual int version() const {
        return 123;
    }
};

} using namespace TestAwsAbstractSignature_Mocks;

void TestAwsAbstractSignature::construct()
{
    //QBENCHMARK {
        MockSignature signature;
    //}
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractSignature::canonicalPath_data()
{
    QTest::addColumn<QUrl>("url");
    QTest::addColumn<QString>("path");

    QTest::newRow("invalid"     ) << QUrl() << QString::fromLatin1("/");
    QTest::newRow("none"        ) << QUrl(QLatin1String("http://example.com"))             << QString::fromLatin1("/");
    QTest::newRow("/"           ) << QUrl(QLatin1String("http://example.com/"))            << QString::fromLatin1("/");
    QTest::newRow("/123"        ) << QUrl(QLatin1String("http://example.com/123"))         << QString::fromLatin1("/123");
    QTest::newRow("/123/"       ) << QUrl(QLatin1String("http://example.com/123/"))        << QString::fromLatin1("/123/");
    QTest::newRow("/foo/bar/baz") << QUrl(QLatin1String("http://example.com/foo/bar/baz")) << QString::fromLatin1("/foo/bar/baz");
}

void TestAwsAbstractSignature::canonicalPath()
{
    QFETCH(QUrl, url);
    QFETCH(QString, path);
    const MockSignature signature;
    QCOMPARE(signature.d_func()->canonicalPath(url), path);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractSignature::canonicalQuery_data()
{
    QTest::addColumn<QUrlQuery>("query");
    QTest::addColumn<QByteArray>("expected");

    // Official example from http://docs.aws.amazon.com/general/latest/gr/signature-version-2.html
    // Amazon is ambiguous on this, but it seems that V4 used the same canonical query format as V2.
    QTest::newRow("lasticmapreduce")
        << QUrlQuery(QLatin1String(
            "Action=DescribeJobFlows"
            "&Version=2009-03-31"
            "&AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&SignatureVersion=2"
            "&SignatureMethod=HmacSHA256"
            "&Timestamp=2011-10-03T15%3A19%3A30"))
        << QByteArray(
            "AWSAccessKeyId=AKIAIOSFODNN7EXAMPLE"
            "&Action=DescribeJobFlows"
            "&SignatureMethod=HmacSHA256"
            "&SignatureVersion=2"
            "&Timestamp=2011-10-03T15%3A19%3A30"
            "&Version=2009-03-31");
}

void TestAwsAbstractSignature::canonicalQuery()
{
    QFETCH(QUrlQuery, query);
    QFETCH(QByteArray, expected);
    const MockSignature signature;
    QCOMPARE(QString::fromUtf8(signature.d_func()->canonicalQuery(query)), QString::fromUtf8(expected));
    QCOMPARE(signature.d_func()->canonicalQuery(query), expected);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractSignature::httpMethod_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QString>("expected");
    QTest::newRow("custom") << QNetworkAccessManager::CustomOperation << QString();
    #define NEW_ROW(op) QTest::newRow(#op) << QNetworkAccessManager::op##Operation << QString::fromLatin1(#op).toUpper()
    NEW_ROW(Delete);
    NEW_ROW(Head);
    NEW_ROW(Get);
    NEW_ROW(Post);
    NEW_ROW(Put);
    #undef NEW_ROW
}

void TestAwsAbstractSignature::httpMethod()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QString, expected);
    const MockSignature signature;
    QCOMPARE(signature.d_func()->httpMethod(operation), expected);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractSignature::setQueryItem_data()
{
    QTest::addColumn<QUrlQuery>("query");
    QTest::addColumn<QString>("key");
    QTest::addColumn<QString>("value");
    QTest::addColumn<QUrlQuery>("expectedQuery");
    QTest::addColumn<bool>("expectedResult");

    QTest::newRow("exists1")
        << QUrlQuery(QLatin1String("key=value&a=1&b=2"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("value")
        << QUrlQuery(QLatin1String("key=value&a=1&b=2"))
        << true;

    QTest::newRow("exists2")
        << QUrlQuery(QLatin1String("a=1&key=value&b=2"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("value")
        << QUrlQuery(QLatin1String("a=1&key=value&b=2"))
        << true;

    QTest::newRow("exists3")
        << QUrlQuery(QLatin1String("a=1&b=2&key=value"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("value")
        << QUrlQuery(QLatin1String("a=1&b=2&key=value"))
        << true;

    QTest::newRow("new1")
        << QUrlQuery(QLatin1String("a=1&b=2"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("value")
        << QUrlQuery(QLatin1String("a=1&b=2&key=value"))
        << true;

    QTest::newRow("new2")
        << QUrlQuery()
        << QString::fromLatin1("key")
        << QString::fromLatin1("value")
        << QUrlQuery(QLatin1String("key=value"))
        << true;

    QTest::newRow("duplicate1")
        << QUrlQuery(QLatin1String("key=different-value"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("value")
        << QUrlQuery(QLatin1String("key=different-value"))
        << false;
}

void TestAwsAbstractSignature::setQueryItem()
{
    QFETCH(QUrlQuery, query);
    QFETCH(QString, key);
    QFETCH(QString, value);
    QFETCH(QUrlQuery, expectedQuery);
    QFETCH(bool, expectedResult);

    for (int warnOnNonIdenticalDuplicate = 0; warnOnNonIdenticalDuplicate < 2; ++warnOnNonIdenticalDuplicate) {
        MockSignature signature;
        if ((warnOnNonIdenticalDuplicate) && (!expectedResult)) {
            QTest::ignoreMessage(QtWarningMsg,
                                 QString::fromLatin1("AwsAbstractSignature::setQueryItem Not overwriting "
                                                     "existing value for key \"%1\" : \"%2\" ")
                                 .arg(key).arg(query.queryItemValue(key)).toLatin1());
        }
        const bool result = signature.d_func()->setQueryItem(query, key, value, warnOnNonIdenticalDuplicate);
        QCOMPARE(query, expectedQuery);
        QCOMPARE(result, expectedResult);
    }
}
#endif
