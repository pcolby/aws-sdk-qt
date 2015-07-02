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
#include "sqs/sqsclient.h"
#include "sqs/sqscreatequeuerequest.h"
#include "sqs/sqscreatequeueresponse.h"

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsclient_p.h"
#endif

#include <QDebug>

#define SQS_SERVICE_NAME QLatin1String("sqs")

Q_DECLARE_METATYPE(AwsRegion::Region)

namespace TestSqsClient_Mocks {

/// @todo  We probably won't need this mock client if responses track their requests.
class MockSqsClient : public SqsClient {
public:
    const AwsAbstractRequest * request;
    MockSqsClient(const AwsRegion::Region region = AwsRegion::InvalidRegion,
                  AwsAbstractCredentials * credentials = NULL,
                  QNetworkAccessManager * const manager = NULL,
                  QObject * const parent = 0)
        : SqsClient(region, credentials, manager, parent), request(NULL) { }

    MockSqsClient(const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
                  QNetworkAccessManager * const manager = NULL,
                  QObject * const parent = 0)
        : SqsClient(endpoint, credentials, manager, parent), request(NULL) { }
protected:
    virtual AwsAbstractResponse * send(const AwsAbstractRequest &request)
    {
        this->request = &request; // Remember for tests to interrogate.
        return SqsClient::send(request);
    }
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

void TestSqsClient::createQueue_data()
{
    /// @todo
    //QTest::addColumn<A>("queueName");
    //QTest::addColumn<AwsRegion::Region>("attributes");
}

void TestSqsClient::createQueue()
{
    /// @todo
    //QFETCH(QString, queueName);
    //QFETCH(QVariantMap, attributes);

    AwsAnonymousCredentials credentials;
    MockNetworkAccessManager manager;
    SqsClient sqs(AwsRegion::US_East_1, &credentials, &manager, this);

    SqsCreateQueueResponse * response = sqs.createQueue(QLatin1String("queue name"));
    QVERIFY(response);

    /// @todo Verify response->request() members. This would require responses
    ///       to track their requests (ie same as QNetworkReply::request) which
    ///       would be good to do anyway.
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#endif
