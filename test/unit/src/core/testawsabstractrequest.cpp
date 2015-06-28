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

#include "testawsabstractrequest.h"

#include "core/awsabstractcredentials.h"
#include "core/awsabstractrequest.h"
#include "core/awsabstractsignature.h"
#include "core/awsbasiccredentials.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractrequest_p.h"
#endif

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

// Bare minimum concrete mock class.
class MockRequest : public AwsAbstractRequest {
public:
    MockRequest() : AwsAbstractRequest() { }
    MockRequest(QObject * const parent) : AwsAbstractRequest(parent) { }
    MockRequest(AwsAbstractRequestPrivate * const d, QObject * const parent)
        : AwsAbstractRequest(d, parent) { }
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply)
        return NULL;
    }
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const {
        return QNetworkRequest(endpoint);
    }
};

class MockSignature : public AwsAbstractSignature {
public:
    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const QByteArray &data = QByteArray()) const
    {
        request.setRawHeader("test-accessKeyId", credentials.accessKeyId().toLocal8Bit());
        request.setRawHeader("test-secretKey",   credentials.secretKey().toLocal8Bit());
        request.setRawHeader("test-token",       credentials.token().toLocal8Bit());
        request.setRawHeader("test-operation",   QByteArray(1, (char)operation));
        if (!data.isNull()) request.setRawHeader("test-data", data);
    }
    virtual int version() const { return -1; }
};

/*class MockNetworkAccessManager : public QNetworkAccessManager {
public:
};*/

void TestAwsAbstractRequest::construct()
{
    {   // Verify the default parent argument is NULL.
        MockRequest request;
        QCOMPARE(request.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        MockRequest request(this);
        QCOMPARE(request.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::construct_d_ptr()
{
    MockRequest temporaryRequest;
    AwsAbstractRequestPrivate * const requestPrivate =
        new AwsAbstractRequestPrivate(&temporaryRequest);
    MockRequest request(requestPrivate, this);
    QCOMPARE(request.d_func(), requestPrivate);
    QCOMPARE(request.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractRequest::data_data()
{
    QTest::addColumn<QByteArray>("data");
    QTest::newRow("null")   << QByteArray();
    QTest::newRow("abc123") << QByteArray("abc123");
}

void TestAwsAbstractRequest::data()
{
    QFETCH(QByteArray, data);
    MockRequest request;
    QCOMPARE(request.data(), QByteArray());
    request.setData(data);
    QCOMPARE(request.data(), data);
}

void TestAwsAbstractRequest::networkRequest_data()
{
    QTest::addColumn<QUrl>("endpoint");
    QTest::addColumn<QString>("accessKeyId");
    QTest::addColumn<QString>("secretKey");
    QTest::addColumn<QString>("token");
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    QTest::addColumn<QByteArray>("data");

    QTest::newRow("null")
        << QUrl() << QString() << QString() << QString()
        << QNetworkAccessManager::UnknownOperation << QByteArray();

    QTest::newRow("1")
        << QUrl(QLatin1String("http://example.com"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("secret")
        << QString::fromLatin1("token")
        << QNetworkAccessManager::GetOperation
        << QByteArray("abc123");
}

void TestAwsAbstractRequest::networkRequest()
{
    QFETCH(QUrl,    endpoint);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QByteArray, data);

    const AwsBasicCredentials credentials(accessKeyId, secretKey, token);
    const MockSignature signature;
    MockRequest mockRequest;
    mockRequest.setOperation(operation);
    mockRequest.setData(data);
    const QNetworkRequest request =
        mockRequest.networkRequest(endpoint, signature, credentials);
    QCOMPARE(request.url(), endpoint);
    QCOMPARE(request.rawHeader("test-accessKeyId"), accessKeyId.toLocal8Bit());
    QCOMPARE(request.rawHeader("test-secretKey"),   secretKey.toLocal8Bit());
    QCOMPARE(request.rawHeader("test-token"),       token.toLocal8Bit());
    QCOMPARE(request.rawHeader("test-operation"),   QByteArray(1, (int)operation));
    QCOMPARE(request.rawHeader("test-data"),        data);
}

void TestAwsAbstractRequest::operation_data()
{
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");
    #define NEW_ROW(op) QTest::newRow(#op) << QNetworkAccessManager::op##Operation
    NEW_ROW(Head);
    NEW_ROW(Get);
    NEW_ROW(Put);
    NEW_ROW(Post);
    NEW_ROW(Delete);
    NEW_ROW(Custom);
    NEW_ROW(Unknown);
    #undef NEW_ROW
}

void TestAwsAbstractRequest::operation()
{
    QFETCH(QNetworkAccessManager::Operation, operation);
    MockRequest request;
    QCOMPARE(request.operation(), QNetworkAccessManager::GetOperation);
    request.setOperation(operation);
    QCOMPARE(request.operation(), operation);
}

void TestAwsAbstractRequest::send_data()
{
    QTest::addColumn<QString>("foo");
    QTest::newRow("bar") << QString::fromLatin1("bar");
}

void TestAwsAbstractRequest::send()
{
    QFETCH(QString, foo);
    Q_UNUSED(foo)
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::post()
{

}

void TestAwsAbstractRequest::put()
{

}
#endif
