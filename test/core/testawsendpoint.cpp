#include "testawsendpoint.h"

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsendpoint_p.h"

void TestAwsEndpoint::loadEndpointData()
{
    QVERIFY(AwsEndpointPrivate::loadEndpointData());

    QBENCHMARK {
        AwsEndpointPrivate::loadEndpointData();
    }
}
