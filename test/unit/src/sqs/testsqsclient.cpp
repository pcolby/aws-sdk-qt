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

#include "testsqsclient.h"
#include "../core/awsendpointtestdata.h"

#include "core/awsanonymouscredentials.h"
#include "sqs/sqsaddpermissionrequest.h"
#include "sqs/sqsaddpermissionresponse.h"
#include "sqs/sqsclient.h"
#include "sqs/sqscreatequeuerequest.h"
#include "sqs/sqscreatequeueresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsclient_p.h"
#endif

#include <QDebug>

#define SQS_SERVICE_NAME QLatin1String("sqs")

Q_DECLARE_METATYPE(AwsRegion::Region)
Q_DECLARE_METATYPE(SqsAddPermissionRequest::PermissionsMap)

namespace TestSqsClient_Mocks {

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

} using namespace TestSqsClient_Mocks;

void TestSqsClient::construct_endpoint_data()
{
    QTest::addColumn<QUrl>("endpoint");

    const QStringList regionNames = AwsEndpointTestData::supportedRegionsMap()
                                        .value(SQS_SERVICE_NAME).toMap().keys();
    Q_ASSERT(!regionNames.isEmpty());
    foreach (const QString &regionName, regionNames) {
        const QUrl endpoint = AwsEndpoint::getEndpoint(regionName, SQS_SERVICE_NAME);
        Q_ASSERT(!endpoint.isEmpty()); // If either of these assertions fail then
        Q_ASSERT(endpoint.isValid());  // AwsEndpoint and/or AwsEndpointTestData is broken.
        QTest::newRow(endpoint.host().toLocal8Bit()) << endpoint;
    }
}

void TestSqsClient::construct_endpoint()
{
    QFETCH(QUrl, endpoint);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(endpoint, &credentials, &manager, this);

    QCOMPARE(sqs.endpoint(), endpoint);
    QCOMPARE(sqs.credentials(), &credentials);
    QCOMPARE(sqs.networkAccessManager(), &manager);
    QCOMPARE(sqs.serviceName(), SQS_SERVICE_NAME);
    QCOMPARE(sqs.parent(), this);
}

void TestSqsClient::construct_region_data()
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

void TestSqsClient::construct_region()
{
    QFETCH(AwsRegion::Region, region);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(region, &credentials, &manager, this);

    QCOMPARE(sqs.region(), region);
    QCOMPARE(sqs.endpoint(), AwsEndpoint::getEndpoint(AwsRegion::name(region), SQS_SERVICE_NAME));
    QCOMPARE(sqs.credentials(), &credentials);
    QCOMPARE(sqs.networkAccessManager(), &manager);
    QCOMPARE(sqs.serviceName(), SQS_SERVICE_NAME);
    QCOMPARE(sqs.parent(), this);
}

void TestSqsClient::addPermission_data()
{
    QTest::addColumn<QString>("label");
    QTest::addColumn<SqsAddPermissionRequest::PermissionsMap>("permissions");
    QTest::addColumn<QString>("queueUrl");

    SqsAddPermissionRequest::PermissionsMap permissions;
    permissions.insert(QString::fromLatin1("foo"),
                       SqsAddPermissionRequest::SendMessageSqsAction);
    QTest::newRow("foo")
        << QString::fromLatin1("foo")
        << permissions
        << QString::fromLatin1("http://example.com/bar/baz");
}

void TestSqsClient::addPermission()
{
    QFETCH(QString, label);
    QFETCH(SqsAddPermissionRequest::PermissionsMap, permissions);
    QFETCH(QString, queueUrl);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    // Verify the explicit SqsCreateQueueRequest overload.
    const SqsAddPermissionRequest request(label, permissions, queueUrl);
    const SqsAddPermissionResponse * const response = sqs.addPermission(request);
    QVERIFY(response);
    QVERIFY(response->request());
    QVERIFY(response->request() != &request); // A copy, not a reference.
    QCOMPARE(*response->request(),  request);
    delete response;
}

void TestSqsClient::createQueue_data()
{
    QTest::addColumn<QString>("queueName");
    QTest::addColumn<QVariantMap>("attributes");

    QTest::newRow("empty-map") << QString::fromLatin1("test") << QVariantMap();

    QVariantMap map;
    map.insert(QLatin1String("foo"), 1);
    map.insert(QLatin1String("bar"), QLatin1String("2"));
    map.insert(QLatin1String("baz"), 3.0);
    QTest::newRow("map")  << QString::fromLatin1("map") << map;
}

void TestSqsClient::createQueue()
{
    QFETCH(QString, queueName);
    QFETCH(QVariantMap, attributes);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsCreateQueueResponse * const response = sqs.createQueue(queueName, attributes);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::CreateQueueSqsAction);
        QCOMPARE(response->request()->queueName(), queueName);
        QCOMPARE(response->request()->attributes(), attributes);
        delete response;
    }

    {   // Verify the explicit SqsCreateQueueRequest overload.
        SqsCreateQueueRequest request;
        request.setQueueName(queueName);
        request.setAttributes(attributes);
        const SqsCreateQueueResponse * const response = sqs.createQueue(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#endif
