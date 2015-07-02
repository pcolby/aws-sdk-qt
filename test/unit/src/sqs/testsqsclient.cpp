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

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#include "sqs/sqsclient_p.h"
#endif

#include <QDebug>

#define SQS_SERVICE_NAME QLatin1String("sqs")

Q_DECLARE_METATYPE(AwsRegion::Region)

namespace TestSqsClient_Mocks {

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
    QNetworkAccessManager manager;
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
    QNetworkAccessManager manager;
    SqsClient sqs(region, &credentials, &manager, this);

    QCOMPARE(sqs.region(), region);
    QCOMPARE(sqs.endpoint(), AwsEndpoint::getEndpoint(AwsRegion::name(region), SQS_SERVICE_NAME));
    QCOMPARE(sqs.credentials(), &credentials);
    QCOMPARE(sqs.networkAccessManager(), &manager);
    QCOMPARE(sqs.serviceName(), SQS_SERVICE_NAME);
    QCOMPARE(sqs.parent(), this);
}

#ifdef QTAWS_ENABLE_PRIVATE_TESTS
#endif
