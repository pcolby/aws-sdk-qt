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
#include "core/awsabstractresponse.h"
#include "core/awsabstractsignature.h"
#include "core/awsbasiccredentials.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractrequest_p.h"
#include "core/awsabstractresponse_p.h"
#endif

#include <QNetworkAccessManager>
#include <QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

namespace TestAwsAbstractRequest_Mocks {

class MockResponse : public AwsAbstractResponse {
public:
    MockResponse(QNetworkReply * const reply) { setReply(reply); }
    virtual const AwsAbstractRequest * request() const { return NULL; }
    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    QNetworkReply * reply() { return d_ptr->reply; }
    #endif
protected:
    virtual void parseFailure(QIODevice &response) { Q_UNUSED(response); }
    virtual void parseSuccess(QIODevice &response) { Q_UNUSED(response); }
};

class MockRequestPrivate;
class MockRequest : public AwsAbstractRequest {
public:
    MockRequest() : AwsAbstractRequest() { }
    MockRequest(AwsAbstractRequestPrivate * const d)
        : AwsAbstractRequest(d) { }
    virtual bool isValid() const { return false; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        return new MockResponse(reply);
    }
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const {
        return QNetworkRequest(endpoint);
    }
};

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
class MockRequestPrivate : public AwsAbstractRequestPrivate {
public:
    mutable int postCount, putCount;
    MockRequestPrivate(MockRequest * const q)
        : AwsAbstractRequestPrivate(q), postCount(0), putCount(0) { }
protected:
    virtual QNetworkReply *post(QNetworkAccessManager &manager,
                                const QNetworkRequest &request) const
    {
        postCount++;
        return AwsAbstractRequestPrivate::post(manager, request);
    }
    virtual QNetworkReply *put(QNetworkAccessManager &manager,
                               const QNetworkRequest &request) const
    {
        putCount++;
        return AwsAbstractRequestPrivate::put(manager, request);
    }
};
#endif

class MockSignature : public AwsAbstractSignature {
public:
    MockSignature() { }
    virtual void sign(const AwsAbstractCredentials &credentials,
                      const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const QByteArray &data = QByteArray()) const
    {
        request.setRawHeader("Authorization",    QByteArray("MockSignature"));
        request.setRawHeader("test-accessKeyId", credentials.accessKeyId().toLocal8Bit());
        request.setRawHeader("test-secretKey",   credentials.secretKey().toLocal8Bit());
        request.setRawHeader("test-token",       credentials.token().toLocal8Bit());
        request.setRawHeader("test-operation",   QByteArray(1, (char)operation));
        if (!data.isNull()) request.setRawHeader("test-data", data);
    }
    virtual int version() const { return -1; }
};

class MockNetworkReply : public QNetworkReply {
public:
    MockNetworkReply(const QNetworkRequest &request, QObject * const parent = 0)
        : QNetworkReply(parent) { setRequest(request); }
protected:
    virtual void abort() { }
    virtual qint64 readData(char * data, qint64 maxSize) {
        Q_UNUSED(data)
        Q_UNUSED(maxSize)
        return -1;
    }
};

class MockNetworkAccessManager : public QNetworkAccessManager {
public:
    Operation operation;
    QNetworkRequest request;
protected:
    QNetworkReply * createRequest(Operation op, const QNetworkRequest &req, QIODevice *outgoingData)
    {
        Q_UNUSED(outgoingData)
        operation = op;
        request = req;
        return new MockNetworkReply(req);
    }
};

} using namespace TestAwsAbstractRequest_Mocks;

void TestAwsAbstractRequest::construct_default()
{
    // Verify defaults.
    MockRequest request;
    QVERIFY(request.data().isNull());
    QCOMPARE(request.operation(), QNetworkAccessManager::GetOperation);
}

void TestAwsAbstractRequest::construct_copy_data()
{
    QTest::addColumn<QByteArray>("data");
    QTest::addColumn<QNetworkAccessManager::Operation>("operation");

    #define NEW_ROW(data, op) QTest::newRow(#op) << data << QNetworkAccessManager::op##Operation
    NEW_ROW(QByteArray(), Head);
    NEW_ROW(QByteArray(), Get);
    NEW_ROW(QByteArray("foo"), Put);
    NEW_ROW(QByteArray("bar"), Post);
    NEW_ROW(QByteArray(), Delete);
    NEW_ROW(QByteArray(""), Custom);
    NEW_ROW(QByteArray(), Unknown);
    #undef NEW_ROW
}

void TestAwsAbstractRequest::construct_copy()
{
    QFETCH(QByteArray, data);
    QFETCH(QNetworkAccessManager::Operation, operation);

    // Verify defaults.
    MockRequest request1;
    request1.setData(data);
    request1.setOperation(operation);
    QCOMPARE(request1.data(), data);
    QCOMPARE(request1.operation(), operation);

    // const_cast here is just to be pedantic... verifies the API.
    MockRequest request2(const_cast<const MockRequest &>(request1));
    QCOMPARE(request1.data(), data);
    QCOMPARE(request2.data(), data);
    QCOMPARE(request1.data(), request2.data());
    QCOMPARE(request1.operation(), operation);
    QCOMPARE(request2.operation(), operation);
    QCOMPARE(request1.operation(), request2.operation());
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::construct_d_ptr()
{
    MockRequest temporaryRequest;
    AwsAbstractRequestPrivate * const requestPrivate =
        new AwsAbstractRequestPrivate(&temporaryRequest);
    MockRequest request(requestPrivate);
    QCOMPARE(request.d_func(), requestPrivate);
}
#endif

void TestAwsAbstractRequest::assignment_data()
{
    construct_copy_data();
}

void TestAwsAbstractRequest::assignment()
{
    QFETCH(QByteArray, data);
    QFETCH(QNetworkAccessManager::Operation, operation);

    MockRequest request1;
    request1.setData(data);
    request1.setOperation(operation);
    QCOMPARE(request1.data(), data);
    QCOMPARE(request1.operation(), operation);

    MockRequest request2;
    request2 = request1;
    QCOMPARE(request1.data(), data);
    QCOMPARE(request2.data(), data);
    QCOMPARE(request1.data(), request2.data());
    QCOMPARE(request1.operation(), operation);
    QCOMPARE(request2.operation(), operation);
    QCOMPARE(request1.operation(), request2.operation());
}

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

    QTest::newRow("null-with-url")
        << QUrl(QLatin1String("http://example.com")) << QString() << QString()
        << QString() << QNetworkAccessManager::UnknownOperation << QByteArray();

    QTest::newRow("empty")
        << QUrl(QLatin1String("")) << QString::fromLatin1("")
        << QString::fromLatin1("") << QString::fromLatin1("")
        << QNetworkAccessManager::UnknownOperation << QByteArray("");

    QTest::newRow("delete")
        << QUrl(QLatin1String("http://example.com/something/to/delete"))
        << QString::fromLatin1("my-awseome-key")
        << QString::fromLatin1("my-awsome-secret")
        << QString::fromLatin1("some-sample-token")
        << QNetworkAccessManager::DeleteOperation
        << QByteArray("ignored");

    QTest::newRow("head")
        << QUrl(QLatin1String("https://example.com"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("secret")
        << QString::fromLatin1("token")
        << QNetworkAccessManager::HeadOperation
        << QByteArray("ignored");

    QTest::newRow("get")
        << QUrl(QLatin1String("http://example.com"))
        << QString::fromLatin1("key")
        << QString::fromLatin1("secret")
        << QString::fromLatin1("token")
        << QNetworkAccessManager::GetOperation
        << QByteArray("ignored");

    QTest::newRow("post")
        << QUrl(QLatin1String("http://example.com/some/path"))
        << QString::fromLatin1("foo")
        << QString::fromLatin1("bar")
        << QString::fromLatin1("baz")
        << QNetworkAccessManager::PostOperation
        << QByteArray("abc123");

    QTest::newRow("put")
        << QUrl(QLatin1String("http://example.com/some/other/path"))
        << QString::fromLatin1("123")
        << QString::fromLatin1("456")
        << QString()
        << QNetworkAccessManager::PutOperation
        << QByteArray("the quick brown fox jumps over the lazy dog");

    QTest::newRow("custom")
        << QUrl(QLatin1String("http://example.com/doesn't/really/matter"))
        << QString::fromLatin1("unused")
        << QString::fromLatin1("not applicable")
        << QString::fromLatin1("irrelevant")
        << QNetworkAccessManager::CustomOperation
        << QByteArray("ignored");
}

void TestAwsAbstractRequest::networkRequest()
{
    QFETCH(QUrl,    endpoint);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QByteArray, data);

    const MockSignature signature;
    const AwsBasicCredentials credentials(accessKeyId, secretKey, token);
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
    networkRequest_data();
}

void TestAwsAbstractRequest::send()
{
    QFETCH(QUrl,    endpoint);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QByteArray, data);

    MockNetworkAccessManager manager;
    const MockSignature signature;
    const AwsBasicCredentials credentials(accessKeyId, secretKey, token);
    MockRequest request;
    request.setOperation(operation);
    request.setData(data);
    QCOMPARE(request.operation(), operation);
    QCOMPARE(request.data(), data);
    AwsAbstractResponse * const response =
        request.send(manager, endpoint, signature, credentials);

    // If the operation is Custom or Unknown, send should simply return NULL.
    if ((operation == QNetworkAccessManager::CustomOperation) ||
        (operation == QNetworkAccessManager::UnknownOperation)) {
        QCOMPARE(response, static_cast<AwsAbstractResponse *>(NULL));
        QCOMPARE(manager.request.url(), QUrl());
        QVERIFY(!manager.request.hasRawHeader("test-accessKeyId"));
        QVERIFY(!manager.request.hasRawHeader("test-secretKey"));
        QVERIFY(!manager.request.hasRawHeader("test-token"));
        QVERIFY(!manager.request.hasRawHeader("test-operation"));
        QVERIFY(!manager.request.hasRawHeader("test-data"));
        return;
    }

    QVERIFY(response);
    QCOMPARE((int)manager.operation, (int)operation);
    QCOMPARE(manager.request.url(), endpoint);
    QCOMPARE(manager.request.rawHeader("test-accessKeyId"), accessKeyId.toLocal8Bit());
    QCOMPARE(manager.request.rawHeader("test-secretKey"),   secretKey.toLocal8Bit());
    QCOMPARE(manager.request.rawHeader("test-token"),       token.toLocal8Bit());
    QCOMPARE(manager.request.rawHeader("test-operation"),   QByteArray(1, (int)operation));
    QCOMPARE(manager.request.rawHeader("test-data"),        data);

    #ifdef QTAWS_ENABLE_PRIVATE_TESTS
    MockResponse * const mockResponse = static_cast<MockResponse *>(response);
    QCOMPARE(mockResponse->reply()->request().url(), endpoint);
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-accessKeyId"), accessKeyId.toLocal8Bit());
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-secretKey"),   secretKey.toLocal8Bit());
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-token"),       token.toLocal8Bit());
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-operation"),   QByteArray(1, (int)operation));
    QCOMPARE(mockResponse->reply()->request().rawHeader("test-data"),        data);
    #endif
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractRequest::post_put_data()
{
    networkRequest_data();
}

void TestAwsAbstractRequest::post_put()
{
    QFETCH(QUrl,    endpoint);
    QFETCH(QString, accessKeyId);
    QFETCH(QString, secretKey);
    QFETCH(QString, token);
    QFETCH(QNetworkAccessManager::Operation, operation);
    QFETCH(QByteArray, data);

    // Setup basic mocks required for invoking AwsAbstractRequest::send
    MockNetworkAccessManager manager;
    const MockSignature signature;
    const AwsBasicCredentials credentials(accessKeyId, secretKey, token);

    // Setup a mock request with our own AwsAbstractRequestPrivate injected.
    MockRequest temporaryRequest;
    MockRequestPrivate * const requestPrivate = new MockRequestPrivate(&temporaryRequest);
    MockRequest request(requestPrivate);
    QCOMPARE(request.d_func(), requestPrivate);

    // Apply the test data.
    request.setOperation(operation);
    request.setData(data);
    QCOMPARE(request.operation(), operation);
    QCOMPARE(request.data(), data);
    AwsAbstractResponse * const response =
        request.send(manager, endpoint, signature, credentials);

    QCOMPARE(requestPrivate->postCount,
             (operation == QNetworkAccessManager::PostOperation) ? 1 : 0);
    QCOMPARE(requestPrivate->putCount,
             (operation == QNetworkAccessManager::PutOperation) ? 1 : 0);

    delete response;
}
#endif
