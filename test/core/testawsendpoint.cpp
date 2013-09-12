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

void TestAwsEndpoint::toVariant()
{
    QByteArray xml(
        "<!DOCTYPE doc [<!ATTLIST e9 attr CDATA \"default\">]><!-- comment --><xml foo=\" bar \">nl<x>ashl</x>ash</xml>");
    {
        QXmlStreamReader reader(xml);
        qDebug() << AwsEndpointPrivate::toVariant(reader);
    }

    QXmlStreamReader reader(xml);
    qDebug() << QJsonDocument::fromVariant(AwsEndpointPrivate::toVariant(reader)).toJson();
}
