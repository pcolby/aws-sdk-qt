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

#include "testawsabstractclient.h"
#include "awsendpointtestdata.h"

#include "core/awsabstractclient.h"
#include "core/awsabstractrequest.h"
#include "core/awsabstractresponse.h"
#include "core/awsbasiccredentials.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "core/awsabstractclient_p.h"
#include "core/awssignaturev0.h"
#include "core/awssignaturev1.h"
#include "core/awssignaturev2.h"
#include "core/awssignaturev3.h"
#include "core/awssignaturev4.h"
#endif

#include <QNetworkAccessManager>

Q_DECLARE_METATYPE(AwsRegion::Region)

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
Q_DECLARE_METATYPE(AwsAbstractSignature *)
#endif

namespace TestAwsAbstractClient_Mocks {

// Bare minimum concrete mock class.
class MockRequest : public AwsAbstractRequest {
public:
    AwsAbstractResponse * mockResponse;
    bool validity;
    MockRequest(const bool validity) : mockResponse(NULL), validity(validity) { }
    virtual bool isValid() const { return validity; }
protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const {
        Q_UNUSED(reply)
        return mockResponse;
    }
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const {
        return QNetworkRequest(endpoint);
    }
};

// Mock class that won't actually send requests, but allows to check whether or
// not the send method was invokeds.
class SendlessRequest : public MockRequest {
public:
    mutable int sendCount;
    SendlessRequest(const bool validity) : MockRequest(validity), sendCount(0) { }
protected:
    virtual AwsAbstractResponse * send(QNetworkAccessManager &manager,
                                       const QUrl &endpoint,
                                       const AwsAbstractSignature &signature,
                                       const AwsAbstractCredentials &credentials) const
    {
        Q_UNUSED(manager)
        Q_UNUSED(endpoint)
        Q_UNUSED(signature)
        Q_UNUSED(credentials)
        sendCount++;
        return mockResponse;
    }
};

} using namespace TestAwsAbstractClient_Mocks;

void TestAwsAbstractClient::construct()
{
    {   // Verify the default parent argument is NULL.
        AwsAbstractClient client;
        QCOMPARE(client.parent(), reinterpret_cast<QObject *>(NULL));
    }

    {   // Verify the handling of an explicit parent argument.
        AwsAbstractClient client(this);
        QCOMPARE(client.parent(), qobject_cast<QObject *>(this));
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractClient::construct_d_ptr()
{
    AwsAbstractClient temporaryClient;
    AwsAbstractClientPrivate * const clientPrivate =
        new AwsAbstractClientPrivate(&temporaryClient);
    AwsAbstractClient client(clientPrivate, this);
    QCOMPARE(client.d_func(), clientPrivate);
    QCOMPARE(client.parent(), qobject_cast<QObject *>(this));
}
#endif

void TestAwsAbstractClient::credentials_data()
{
    QTest::addColumn<AwsAbstractCredentials *>("credentials");

    QTest::newRow("null")
        << reinterpret_cast<AwsAbstractCredentials *>(NULL);

    QTest::newRow("basic")
        << qobject_cast<AwsAbstractCredentials *>(new AwsBasicCredentials(QString(),QString()));
}

void TestAwsAbstractClient::credentials()
{
    QFETCH(AwsAbstractCredentials *, credentials);

    AwsAbstractClient client;
    QCOMPARE(client.credentials(), reinterpret_cast<AwsAbstractCredentials *>(NULL));

    client.setCredentials(credentials);
    QCOMPARE(client.credentials(), credentials);

    client.setCredentials(NULL);
    QCOMPARE(client.credentials(), reinterpret_cast<AwsAbstractCredentials *>(NULL));

    delete credentials;
}

void TestAwsAbstractClient::endpoint_data()
{
    QTest::addColumn<QUrl>("endpoint");
    QTest::newRow("null")    << QUrl();
    QTest::newRow("example") << QUrl(QLatin1String("http://example.com"));
}

void TestAwsAbstractClient::endpoint()
{
    QFETCH(QUrl, endpoint);

    AwsAbstractClient client;
    QVERIFY(client.endpoint().isEmpty());
    QVERIFY(!client.endpoint().isValid());

    client.setEndpoint(endpoint);
    QCOMPARE(client.endpoint(), endpoint);
}

void TestAwsAbstractClient::networkAccessManager_data()
{
    QTest::addColumn<QNetworkAccessManager *>("manager");

    QTest::newRow("null")
        << reinterpret_cast<QNetworkAccessManager *>(NULL);

    QTest::newRow("valid")
        << qobject_cast<QNetworkAccessManager *>(new QNetworkAccessManager());
}

void TestAwsAbstractClient::networkAccessManager()
{
    QFETCH(QNetworkAccessManager *, manager);

    AwsAbstractClient client;
    QCOMPARE(client.networkAccessManager(), reinterpret_cast<QNetworkAccessManager *>(NULL));

    client.setNetworkAccessManager(manager);
    QCOMPARE(client.networkAccessManager(), manager);

    client.setNetworkAccessManager(NULL);
    QCOMPARE(client.networkAccessManager(), reinterpret_cast<QNetworkAccessManager *>(NULL));

    delete manager;
}

void TestAwsAbstractClient::networkAccessManager_parent()
{
    // Given a client with a parent.
    QNetworkAccessManager manager;
    AwsAbstractClient client(&manager);
    QCOMPARE(client.networkAccessManager(), reinterpret_cast<QNetworkAccessManager *>(NULL));
    QCOMPARE(client.parent(), qobject_cast<QObject *>(&manager));

    // Such that the parent happens also be the client's network access manager.
    client.setNetworkAccessManager(&manager);
    QCOMPARE(client.networkAccessManager(), &manager);
    QCOMPARE(client.networkAccessManager(), qobject_cast<QObject *>(client.parent()));
    QCOMPARE(client.parent(), qobject_cast<QObject *>(&manager));

    // When the client's access manager is changed, then the parent is cleared also.
    client.setNetworkAccessManager(NULL);
    QCOMPARE(client.networkAccessManager(), reinterpret_cast<QNetworkAccessManager *>(NULL));
    QCOMPARE(client.parent(), reinterpret_cast<QNetworkAccessManager *>(NULL));
}

void TestAwsAbstractClient::region_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    #define NEW_ROW(region) QTest::newRow(#region) << AwsRegion::region
    NEW_ROW(InvalidRegion);
    NEW_ROW(AP_Northeast_1);
    NEW_ROW(AP_Southeast_1);
    NEW_ROW(AP_Southeast_2);
    NEW_ROW(EU_West_1);
    NEW_ROW(SA_East_1);
    NEW_ROW(US_East_1);
    NEW_ROW(US_Gov_West_1);
    NEW_ROW(US_West_1);
    NEW_ROW(US_West_2);
    #undef NEW_ROW
}

void TestAwsAbstractClient::region()
{
    QFETCH(AwsRegion::Region, region);

    AwsAbstractClient client;
    QCOMPARE(client.region(), AwsRegion::InvalidRegion);

    client.setRegion(region);
    QCOMPARE(client.region(), region);
}

void TestAwsAbstractClient::send_data()
{
    QTest::addColumn<AwsAbstractRequest *>("request");
    QTest::addColumn<AwsAbstractResponse *>("response");

    {
        SendlessRequest * const request = new SendlessRequest(false);
        Q_ASSERT(!request->isValid());
        request->mockResponse = reinterpret_cast<AwsAbstractResponse *>(0x1234);
        Q_ASSERT(!request->isValid());
        QTest::newRow("invalid-request") << request << request->mockResponse;
    }

    {
        SendlessRequest * const request = new SendlessRequest(true);
        Q_ASSERT(request->isValid());
        request->mockResponse = reinterpret_cast<AwsAbstractResponse *>(0x5678);
        Q_ASSERT(request->isValid());
        QTest::newRow("valid-request") << request << request->mockResponse;
    }
}

void TestAwsAbstractClient::send()
{
    QFETCH(AwsAbstractRequest *, request);
    QFETCH(AwsAbstractResponse *, response);

    AwsAbstractClient client;
#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    client.d_func()->serviceName = QLatin1String("mock");
#else
    Q_UNUSED(response)
#endif

    // Without credentials, send should return a NULL pointer.
    QCOMPARE(client.credentials(), reinterpret_cast<AwsAbstractCredentials *>(NULL));
    QCOMPARE(client.send(*request), reinterpret_cast<AwsAbstractResponse *>(NULL));

    AwsBasicCredentials credentials(QLatin1String("key"), QLatin1String("secret"));
    client.setCredentials(&credentials);

    // Without a network access manager, send should still return a NULL pointer.
    QCOMPARE(client.networkAccessManager(), reinterpret_cast<QNetworkAccessManager *>(NULL));
    QCOMPARE(client.send(*request), reinterpret_cast<AwsAbstractResponse *>(NULL));

    QNetworkAccessManager manager;
    client.setNetworkAccessManager(&manager);

    // Without a signature object, send should still return a NULL pointer.
    QCOMPARE(client.signature(), reinterpret_cast<AwsAbstractSignature *>(NULL));
    QCOMPARE(client.send(*request), reinterpret_cast<AwsAbstractResponse *>(NULL));

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
    client.d_func()->signature = new AwsSignatureV4; // Takes ownership.

    // If the request is invalid, send should still return a NULL pointer.
    if (request->isValid()) {
        QCOMPARE(client.send(*request), response);
    } else {
        QCOMPARE(client.send(*request), reinterpret_cast<AwsAbstractResponse *>(NULL));
    }

    // Verify that send was invoked a total of 0 or 1 times, occording to
    // whether or not the request was valid.
    SendlessRequest * const sendlessRequest = reinterpret_cast<SendlessRequest *>(request);
    QCOMPARE(sendlessRequest->sendCount, (request->isValid()) ? 1 : 0);
#endif

    delete request;
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractClient::serviceName_data()
{
    QTest::addColumn<QString>("serviceName");

    QTest::newRow("null")  << QString();
    QTest::newRow("empty") << QString::fromLatin1("");
    QTest::newRow("white") << QString::fromLatin1(" ");

    foreach (const QString &serviceName, AwsEndpointTestData::fullServiceNames().keys()) {
        QTest::newRow(serviceName.toLocal8Bit()) << serviceName;
    }
}

void TestAwsAbstractClient::serviceName()
{
    QFETCH(QString, serviceName);

    AwsAbstractClient client;
    QVERIFY(client.serviceName().isNull());

    client.d_func()->serviceName = serviceName;
    QCOMPARE(client.serviceName(), serviceName);
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractClient::signature_data()
{
    QTest::addColumn<AwsAbstractSignature *>("signature");

    QTest::newRow("null")
        << reinterpret_cast<AwsAbstractSignature *>(NULL);

    QTest::newRow("v0")
        << reinterpret_cast<AwsAbstractSignature *>(new AwsSignatureV0());

    QTest::newRow("v1")
        << reinterpret_cast<AwsAbstractSignature *>(new AwsSignatureV1());

    QTest::newRow("v2")
        << reinterpret_cast<AwsAbstractSignature *>(new AwsSignatureV2());

    QTest::newRow("v3")
        << reinterpret_cast<AwsAbstractSignature *>(new AwsSignatureV3());

    QTest::newRow("v4")
        << reinterpret_cast<AwsAbstractSignature *>(new AwsSignatureV4());
}

void TestAwsAbstractClient::signature()
{
    QFETCH(AwsAbstractSignature *, signature);

    AwsAbstractClient client;
    QCOMPARE(client.signature(), reinterpret_cast<AwsAbstractSignature *>(NULL));

    client.d_func()->signature = signature;
    QCOMPARE(client.signature(), signature);

    client.d_func()->signature = NULL;
    QCOMPARE(client.signature(), reinterpret_cast<AwsAbstractSignature *>(NULL));

    delete signature;
}
#endif

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
void TestAwsAbstractClient::constructPrivate()
{
    AwsAbstractClient client;
    AwsAbstractClientPrivate clientPrivate(&client);
    QCOMPARE(clientPrivate.credentials, reinterpret_cast<AwsAbstractCredentials *>(NULL));
    QVERIFY(clientPrivate.endpoint.isEmpty());
    QVERIFY(!clientPrivate.endpoint.isValid());
    QCOMPARE(clientPrivate.networkAccessManager, reinterpret_cast<QNetworkAccessManager *>(NULL));
    QCOMPARE(clientPrivate.region, AwsRegion::InvalidRegion);
    QVERIFY(clientPrivate.serviceName.isNull());
    QCOMPARE(clientPrivate.signature, reinterpret_cast<AwsAbstractSignature *>(NULL));
    QCOMPARE(clientPrivate.q_func(), &client);
}

#endif
