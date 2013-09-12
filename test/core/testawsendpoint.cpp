#include "testawsendpoint.h"

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsendpoint_p.h"

#include <QJsonDocument>

void TestAwsEndpoint::loadEndpointData()
{
    /*QVERIFY(AwsEndpointPrivate::loadEndpointData());

    QCOMPARE(AwsEndpointPrivate::regions.size(), 9);
    QCOMPARE(AwsEndpointPrivate::services.size(), 30);

    QBENCHMARK {
        AwsEndpointPrivate::loadEndpointData();
    }*/
}

void TestAwsEndpoint::parseRegion()
{
    AwsEndpointPrivate::hosts.clear();
    AwsEndpointPrivate::regions.clear();

    const QByteArray region1(
        "<Region>"
            "<Name>region1</Name>"
            "<Endpoint>"
                "<ServiceName>service1</ServiceName>"
                "<Http>false</Http>"
                "<Https>false</Https>"
                "<Hostname>hostname1</Hostname>"
            "</Endpoint>"
            "<foo>ignored</foo>"
            "<Endpoint>"
                "<ServiceName>service2</ServiceName>"
                "<Http>true</Http>"
                "<Https>false</Https>"
                "<Hostname>hostname2</Hostname>"
            "</Endpoint>"
            "<foo>ignored</foo>"
            "<Endpoint>"
                "<ServiceName>service3</ServiceName>"
                "<Http>false</Http>"
                "<Https>true</Https>"
                "<Hostname>hostname3</Hostname>"
            "</Endpoint>"
            "<foo>ignored</foo>"
            "<Endpoint>"
                "<ServiceName>service4</ServiceName>"
                "<foo>ignored</foo>"
                "<Http>true</Http>"
                "<foo>ignored</foo>"
                "<Https>true</Https>"
                "<foo>ignored</foo>"
                "<Hostname>hostname4</Hostname>"
            "</Endpoint>"
        "</Region>");

    // We should be able to run these tests multiple times with consistent results
    // ie parseRegion will overwrite, not replicate duplicates.
    for (int count = 0; count < 3; ++count) {
        QXmlStreamReader xml(region1);
        xml.readNextStartElement();
        AwsEndpointPrivate::parseRegion(xml);
        QCOMPARE(AwsEndpointPrivate::hosts.size(), 4);
        QCOMPARE(AwsEndpointPrivate::regions.size(), 1);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].services.size(), 4);
        for (int index = 1; index <= 4; ++index) {
            QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                    services[QString::fromLatin1("service%1").arg(index)].hostName,
                    QString::fromLatin1("hostname%1").arg(index));
        }
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service1")].transports, 0);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service2")].transports, AwsEndpoint::HTTP);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service3")].transports, AwsEndpoint::HTTPS);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service4")].transports, AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    }

    const QByteArray region2(
        "<Region>"
            "<Name>region2</Name>"
            "<Endpoint>"
                "<ServiceName>service1</ServiceName>"
                "<Hostname>hostname1</Hostname>"
            "</Endpoint>"
            "<foo>ignored</foo>"
            "<Endpoint>"
                "<foo>ignored</foo>"
                "<ServiceName>service1000</ServiceName>"
                "<foo>ignored</foo>"
                "<Hostname>hostname1000</Hostname>"
                "<foo>ignored</foo>"
            "</Endpoint>"
        "</Region>");

    QXmlStreamReader xml(region2);
    xml.readNextStartElement();
    AwsEndpointPrivate::parseRegion(xml);
    QCOMPARE(AwsEndpointPrivate::hosts.size(), 5);
    QCOMPARE(AwsEndpointPrivate::regions.size(), 2);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].services.size(), 4);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].services.size(), 2);
    for (int index = 1; index <= 4; ++index) {
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QString::fromLatin1("service%1").arg(index)].hostName,
                QString::fromLatin1("hostname%1").arg(index));
    }
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
            services[QLatin1String("service1")].hostName, QLatin1String("hostname1"));
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
            services[QLatin1String("service1000")].hostName, QLatin1String("hostname1000"));
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
            services[QLatin1String("service1")].transports, 0);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
            services[QLatin1String("service2")].transports, AwsEndpoint::HTTP);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
            services[QLatin1String("service3")].transports, AwsEndpoint::HTTPS);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
            services[QLatin1String("service4")].transports, AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
            services[QLatin1String("service1")].transports, 0);
    QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
            services[QLatin1String("service1000")].transports, 0);
}

void TestAwsEndpoint::parseRegions()
{
    AwsEndpointPrivate::hosts.clear();
    AwsEndpointPrivate::regions.clear();

    const QByteArray regions(
        "<Regions>"
            "<foo>ignored</foo>"
            "<Region>"
                "<Name>region1</Name>"
                "<Endpoint>"
                    "<ServiceName>service1</ServiceName>"
                    "<Http>false</Http>"
                    "<Https>false</Https>"
                    "<Hostname>hostname1</Hostname>"
                "</Endpoint>"
                "<Endpoint>"
                    "<ServiceName>service2</ServiceName>"
                    "<Http>true</Http>"
                    "<Https>false</Https>"
                    "<Hostname>hostname2</Hostname>"
                "</Endpoint>"
                "<Endpoint>"
                    "<ServiceName>service3</ServiceName>"
                    "<Http>false</Http>"
                    "<Https>true</Https>"
                    "<Hostname>hostname3</Hostname>"
                "</Endpoint>"
                "<Endpoint>"
                    "<ServiceName>service4</ServiceName>"
                    "<Http>true</Http>"
                    "<Https>true</Https>"
                    "<Hostname>hostname4</Hostname>"
                "</Endpoint>"
            "</Region>"
            "<foo>ignored</foo>"
            "<Region>"
                "<Name>region2</Name>"
                "<Endpoint>"
                    "<ServiceName>service1</ServiceName>"
                    "<Hostname>hostname1</Hostname>"
                "</Endpoint>"
                "<Endpoint>"
                    "<ServiceName>service1000</ServiceName>"
                    "<Hostname>hostname1000</Hostname>"
                "</Endpoint>"
            "</Region>"
            "<foo>ignored</foo>"
        "</Regions>");

    // We should be able to run these tests multiple times with consistent results
    // ie parseRegion will overwrite, not replicate duplicates.
    for (int count = 0; count < 3; ++count) {
        QXmlStreamReader xml(regions);
        xml.readNextStartElement();
        AwsEndpointPrivate::parseRegions(xml);
        QCOMPARE(AwsEndpointPrivate::hosts.size(), 5);
        QCOMPARE(AwsEndpointPrivate::regions.size(), 2);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].services.size(), 4);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].services.size(), 2);
        for (int index = 1; index <= 4; ++index) {
            QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                    services[QString::fromLatin1("service%1").arg(index)].hostName,
                    QString::fromLatin1("hostname%1").arg(index));
        }
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
                services[QLatin1String("service1")].hostName, QLatin1String("hostname1"));
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
                services[QLatin1String("service1000")].hostName, QLatin1String("hostname1000"));
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service1")].transports, 0);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service2")].transports, AwsEndpoint::HTTP);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service3")].transports, AwsEndpoint::HTTPS);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region1")].
                services[QLatin1String("service4")].transports, AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
                services[QLatin1String("service1")].transports, 0);
        QCOMPARE(AwsEndpointPrivate::regions[QLatin1String("region2")].
                services[QLatin1String("service1000")].transports, 0);
    }
}

void TestAwsEndpoint::parseService()
{
    AwsEndpointPrivate::services.clear();

}

void TestAwsEndpoint::parseServices()
{
    AwsEndpointPrivate::services.clear();

}
