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
#include "sqs/sqschangemessagevisibilitybatchrequest.h"
#include "sqs/sqschangemessagevisibilitybatchresponse.h"
#include "sqs/sqschangemessagevisibilityrequest.h"
#include "sqs/sqschangemessagevisibilityresponse.h"
#include "sqs/sqsclient.h"
#include "sqs/sqscreatequeuerequest.h"
#include "sqs/sqscreatequeueresponse.h"
#include "sqs/sqsdeletemessagebatchrequest.h"
#include "sqs/sqsdeletemessagebatchresponse.h"
#include "sqs/sqsdeletemessagerequest.h"
#include "sqs/sqsdeletemessageresponse.h"
#include "sqs/sqsdeletequeuerequest.h"
#include "sqs/sqsdeletequeueresponse.h"
#include "sqs/sqsgetqueueattributesrequest.h"
#include "sqs/sqsgetqueueattributesresponse.h"
#include "sqs/sqsgetqueueurlrequest.h"
#include "sqs/sqsgetqueueurlresponse.h"
#include "sqs/sqslistdeadlettersourcequeuesrequest.h"
#include "sqs/sqslistdeadlettersourcequeuesresponse.h"
#include "sqs/sqslistqueuesrequest.h"
#include "sqs/sqslistqueuesresponse.h"
#include "sqs/sqspurgequeuerequest.h"
#include "sqs/sqspurgequeueresponse.h"
#include "sqs/sqsreceivemessagerequest.h"
#include "sqs/sqsreceivemessageresponse.h"
#include "sqs/sqsremovepermissionrequest.h"
#include "sqs/sqsremovepermissionresponse.h"
#include "sqs/sqssendmessagebatchrequest.h"
#include "sqs/sqssendmessagebatchresponse.h"
#include "sqs/sqssendmessagerequest.h"
#include "sqs/sqssendmessageresponse.h"
#include "sqs/sqssetqueueattributesrequest.h"
#include "sqs/sqssetqueueattributesresponse.h"

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
                       SqsAddPermissionRequest::SendMessageAction);
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

    // Verify the explicit SqsAddPermissionRequest overload.
    const SqsAddPermissionRequest request(label, permissions, queueUrl);
    const SqsAddPermissionResponse * const response = sqs.addPermission(request);
    QVERIFY(response);
    QVERIFY(response->request());
    QVERIFY(response->request() != &request); // A copy, not a reference.
    QCOMPARE(*response->request(),  request);
    delete response;
}

void TestSqsClient::changeMessageVisbility_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("receiptHandle");
    QTest::addColumn<int>("visibilityTimeout");

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/foo")
        << QString::fromLatin1("abc123")
        << 1024;
}

void TestSqsClient::changeMessageVisbility()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);
    QFETCH(int, visibilityTimeout);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsChangeMessageVisibilityResponse * const response =
            sqs.changeMessageVisibility(queueUrl, receiptHandle, visibilityTimeout);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::ChangeMessageVisibilityAction);
        QCOMPARE(response->request()->queueUrl(), queueUrl);
        QCOMPARE(response->request()->receiptHandle(), receiptHandle);
        QCOMPARE(response->request()->visibilityTimeout(), visibilityTimeout);
        delete response;
    }

    {   // Verify the explicit SqsChangeMessageVisibilityRequest overload.
        const SqsChangeMessageVisibilityRequest request(
            queueUrl, receiptHandle, visibilityTimeout);
        const SqsChangeMessageVisibilityResponse * const response =
            sqs.changeMessageVisibility(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

//void TestSqsClient::changeMessageVisbilityBatch_data();
//void TestSqsClient::changeMessageVisbilityBatch();

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
        QCOMPARE(response->request()->action(), SqsRequest::CreateQueueAction);
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

void TestSqsClient::deleteMessage_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("receiptHandle");

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/foo")
        << QString::fromLatin1("abc123");
}

void TestSqsClient::deleteMessage()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, receiptHandle);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsDeleteMessageResponse * const response =
            sqs.deleteMessage(queueUrl, receiptHandle);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::DeleteMessageAction);
        QCOMPARE(response->request()->queueUrl(), queueUrl);
        delete response;
    }

    {   // Verify the explicit SqsDeleteMessageRequest overload.
        const SqsDeleteMessageRequest request(queueUrl, receiptHandle);
        const SqsDeleteMessageResponse * const response = sqs.deleteMessage(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

//void TestSqsClient::deleteMessageBatch_batch();
//void TestSqsClient::deleteMessageBatch();

void TestSqsClient::deleteQueue_data()
{
    QTest::addColumn<QString>("queueUrl");

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/foo");
}

void TestSqsClient::deleteQueue()
{
    QFETCH(QString, queueUrl);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsDeleteQueueResponse * const response = sqs.deleteQueue(queueUrl);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::DeleteQueueAction);
        QCOMPARE(response->request()->queueUrl(), queueUrl);
        delete response;
    }

    {   // Verify the explicit SqsDeleteQueueRequest overload.
        const SqsDeleteQueueRequest request(queueUrl);
        const SqsDeleteQueueResponse * const response = sqs.deleteQueue(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

void TestSqsClient::getQueueUrl_data()
{
    QTest::addColumn<QString>("queueName");

    QTest::newRow("foo") << QString::fromLatin1("foo");
}

void TestSqsClient::getQueueUrl()
{
    QFETCH(QString, queueName);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsGetQueueUrlResponse * const response = sqs.getQueueUrl(queueName);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::GetQueueUrlAction);
        QCOMPARE(response->request()->queueName(), queueName);
        delete response;
    }

    {   // Verify the explicit SqsGetQueueUrlRequest overload.
        const SqsGetQueueUrlRequest request(queueName);
        const SqsGetQueueUrlResponse * const response = sqs.getQueueUrl(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

void TestSqsClient::listDeadLetterSourceQueues_data()
{
    QTest::addColumn<QString>("queueUrl");

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/foo");
}

void TestSqsClient::listDeadLetterSourceQueues()
{
    QFETCH(QString, queueUrl);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsListDeadLetterSourceQueuesResponse * const response =
            sqs.listDeadLetterSourceQueues(queueUrl);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::ListDeadLetterSourceQueuesAction);
        QCOMPARE(response->request()->queueUrl(), queueUrl);
        delete response;
    }

    {   // Verify the explicit SqsListDeadLetterSourceQueuesRequest overload.
        const SqsListDeadLetterSourceQueuesRequest request(queueUrl);
        const SqsListDeadLetterSourceQueuesResponse * const response =
            sqs.listDeadLetterSourceQueues(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

void TestSqsClient::listQueues_data()
{
    QTest::addColumn<QString>("queueNamePrefix");

    QTest::newRow("foo") << QString::fromLatin1("foo");
}

void TestSqsClient::listQueues()
{
    QFETCH(QString, queueNamePrefix);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsListQueuesResponse * const response = sqs.listQueues(queueNamePrefix);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::ListQueuesAction);
        QCOMPARE(response->request()->queueNamePrefix(), queueNamePrefix);
        delete response;
    }

    {   // Verify the explicit SqsListQueuesRequest overload.
        const SqsListQueuesRequest request(queueNamePrefix);
        const SqsListQueuesResponse * const response = sqs.listQueues(queueNamePrefix);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

void TestSqsClient::purgeQueue_data()
{
    QTest::addColumn<QString>("queueUrl");

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/foo");
}

void TestSqsClient::purgeQueue()
{
    QFETCH(QString, queueUrl);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsPurgeQueueResponse * const response = sqs.purgeQueue(queueUrl);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::PurgeQueueAction);
        QCOMPARE(response->request()->queueUrl(), queueUrl);
        delete response;
    }

    {   // Verify the explicit SqsPurgeQueueRequest overload.
        const SqsPurgeQueueRequest request(queueUrl);
        const SqsPurgeQueueResponse * const response = sqs.purgeQueue(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

//void TestSqsClient::receiveMessage_data();
//void TestSqsClient::receiveMessage();

void TestSqsClient::removePermission_data()
{
    QTest::addColumn<QString>("queueUrl");
    QTest::addColumn<QString>("label");

    QTest::newRow("foo")
        << QString::fromLatin1("http://example.com/foo")
        << QString::fromLatin1("bar");
}

void TestSqsClient::removePermission()
{
    QFETCH(QString, queueUrl);
    QFETCH(QString, label);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    {   // Verify the convenience overload.
        const SqsRemovePermissionResponse * const response =
            sqs.removePermission(queueUrl, label);
        QVERIFY(response);
        QVERIFY(response->request());
        QCOMPARE(response->request()->action(), SqsRequest::RemovePermissionAction);
        QCOMPARE(response->request()->queueUrl(), queueUrl);
        delete response;
    }

    {   // Verify the explicit SqsRemovePermissionRequest overload.
        const SqsRemovePermissionRequest request(queueUrl, label);
        const SqsRemovePermissionResponse * const response = sqs.removePermission(request);
        QVERIFY(response);
        QVERIFY(response->request());
        QVERIFY(response->request() != &request); // A copy, not a reference.
        QCOMPARE(*response->request(), request);
        delete response;
    }
}

//void TestSqsClient::sendMessage();
//void TestSqsClient::sendMessage();

//void TestSqsClient::sendMessageBatch();
//void TestSqsClient::sendMessageBatch();

//void TestSqsClient::setQueueAttributes();
//void TestSqsClient::setQueueAttributes();

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#endif
