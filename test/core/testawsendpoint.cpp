#include "testawsendpoint.h"

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsendpoint_p.h"

#include <QJsonDocument>

void TestAwsEndpoint::loadEndpointData()
{
    QVERIFY(AwsEndpointPrivate::loadEndpointData());

    QCOMPARE(AwsEndpointPrivate::regions.size(), 9);
    QCOMPARE(AwsEndpointPrivate::services.size(), 30);

    //QBENCHMARK {
        //AwsEndpointPrivate::loadEndpointData();
    //}
}
