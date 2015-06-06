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

#include "testawsendpoint.h"
#include "awsendpointtestdata.h"

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsendpoint_p.h"

#include <QFile>

Q_DECLARE_METATYPE(AwsEndpoint::Transport)
Q_DECLARE_METATYPE(AwsEndpoint::Transports)

void TestAwsEndpoint::init()
{
    AwsEndpointPrivate::hosts.clear();
    AwsEndpointPrivate::regions.clear();
    AwsEndpointPrivate::services.clear();
}

void TestAwsEndpoint::construct_QByteArray_data()
{
    QTest::addColumn<QByteArray>("hostName");
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QByteArray()
        << QString()
        << QString()
        << false;

    QTest::newRow("empty")
        << QByteArray("")
        << QString::fromLatin1("")
        << QString::fromLatin1("")
        << false;

    const QVariantMap hosts = AwsEndpointTestData::hostInfoMap();
    for (QVariantMap::const_iterator host = hosts.constBegin(); host != hosts.constEnd(); ++host) {
        const QVariantMap hostInfo = host.value().toMap();
        QTest::newRow(QString::fromLatin1("%1").arg(host.key()).toLatin1())
            << host.key().toUtf8()
            << hostInfo.value(QLatin1String("region")).toString()
            << hostInfo.value(QLatin1String("service")).toString()
            << true;
    }
}

void TestAwsEndpoint::construct_QByteArray()
{
    QFETCH(QByteArray, hostName);
    QFETCH(QString, regionName);
    QFETCH(QString, serviceName);
    QFETCH(bool, isValid);

    const AwsEndpoint endpoint(hostName);
    QCOMPARE(endpoint.hostName(),    QString::fromUtf8(hostName));
    QCOMPARE(endpoint.regionName(),  regionName);
    QCOMPARE(endpoint.serviceName(), serviceName);
    QCOMPARE(endpoint.isValid(),     isValid);
}

void TestAwsEndpoint::construct_QString_data()
{
    QTest::addColumn<QString>("hostName");
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("null")
        << QString()
        << QString()
        << QString()
        << false;

    QTest::newRow("empty")
        << QString::fromLatin1("")
        << QString::fromLatin1("")
        << QString::fromLatin1("")
        << false;

    const QVariantMap hosts = AwsEndpointTestData::hostInfoMap();
    for (QVariantMap::const_iterator host = hosts.constBegin(); host != hosts.constEnd(); ++host) {
        const QVariantMap hostInfo = host.value().toMap();
        QTest::newRow(QString::fromLatin1("%1").arg(host.key()).toLatin1())
            << host.key()
            << hostInfo.value(QLatin1String("region")).toString()
            << hostInfo.value(QLatin1String("service")).toString()
            << true;
    }
}

void TestAwsEndpoint::construct_QString()
{
    QFETCH(QString, hostName);
    QFETCH(QString, regionName);
    QFETCH(QString, serviceName);
    QFETCH(bool, isValid);

    const AwsEndpoint endpoint(hostName);
    QCOMPARE(endpoint.hostName(),    hostName);
    QCOMPARE(endpoint.regionName(),  regionName);
    QCOMPARE(endpoint.serviceName(), serviceName);
    QCOMPARE(endpoint.isValid(),     isValid);
}

void TestAwsEndpoint::getEndpoint_data()
{
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<AwsEndpoint::Transports>("transport");
    QTest::addColumn<QUrl>("endpoint");

    QTest::newRow("null")
        << QString()
        << QString()
        << AwsEndpoint::Transports(AwsEndpoint::AnyTransport)
        << QUrl();

    const QVariantMap regions = AwsEndpointTestData::supportedServicesMap();
    for (QVariantMap::const_iterator region = regions.constBegin(); region != regions.constEnd(); ++region) {
        const QVariantMap services = region.value().toMap();
        for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
            const QString hostName = AwsEndpointTestData::regionServiceHosts().value(region.key()).toMap().value(service.key()).toString();
            for (int transports = 1; transports <= AwsEndpoint::AnyTransport; ++transports) {
                QUrl url;
                if (service.value().toInt() & transports) {
                    url.setHost(hostName);
                    if (service.value().toInt() & transports & AwsEndpoint::HTTPS) {
                        url.setScheme(QLatin1String("https"));
                    } else if (service.value().toInt() & transports & AwsEndpoint::HTTP ) {
                        url.setScheme(QLatin1String("http"));
                    }
                }
                QTest::newRow(QString::fromLatin1("%1:%2:%3").arg(region.key()).arg(service.key()).arg(transports).toLatin1())
                    << region.key() << service.key() << AwsEndpoint::Transports(transports) << url;
            }
        }
    }
}

void TestAwsEndpoint::getEndpoint()
{
    QFETCH(QString, regionName);
    QFETCH(QString, serviceName);
    QFETCH(AwsEndpoint::Transports, transport);
    QFETCH(QUrl, endpoint);

    QCOMPARE(AwsEndpoint::getEndpoint(regionName, serviceName, transport), endpoint);
}

void TestAwsEndpoint::isSupported_data()
{
    QTest::addColumn<QString>("hostName");
    QTest::addColumn<AwsEndpoint::Transport>("transport");
    QTest::addColumn<bool>("supported");

    QTest::newRow("null")     << QString() << AwsEndpoint::AnyTransport << false;
    QTest::newRow("empty")    << QString::fromLatin1("") << AwsEndpoint::AnyTransport << false;
    QTest::newRow("space")    << QString::fromLatin1(" ") << AwsEndpoint::AnyTransport << false;
    QTest::newRow("spaces")   << QString::fromLatin1("  ") << AwsEndpoint::AnyTransport << false;
    QTest::newRow("jiberish") << QString::fromLatin1("sh398uslajskjsk") << AwsEndpoint::AnyTransport << false;

    const QVariantMap hosts = AwsEndpointTestData::hostInfoMap();
    for (QVariantMap::const_iterator host = hosts.constBegin(); host != hosts.constEnd(); ++host) {
        const QVariantMap hostInfo = host.value().toMap();
        const QString region = hostInfo.value(QLatin1String("region")).toString();
        const QString service = hostInfo.value(QLatin1String("service")).toString();
        for (int transport = 1; transport <= AwsEndpoint::AnyTransport; transport*=2) {
            QTest::newRow(QString::fromLatin1("%1:%2").arg(host.key()).arg(transport).toUtf8())
                << host.key() << (AwsEndpoint::Transport)transport
                << ((AwsEndpointTestData::supportedServicesMap().value(region).toMap().value(service).toInt() & transport) ? true : false);
        }
    }
}

void TestAwsEndpoint::isSupported()
{
    QFETCH(QString, hostName);
    QFETCH(AwsEndpoint::Transport, transport);
    QFETCH(bool, supported);

    const AwsEndpoint endpoint(hostName);
    QCOMPARE(endpoint.isSupported(transport), supported);
}

void TestAwsEndpoint::isSupported_static_data()
{
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<AwsEndpoint::Transports>("transports");
    QTest::addColumn<bool>("isSupported");

    QTest::newRow("null")
        << QString()
        << QString()
        << AwsEndpoint::Transports(AwsEndpoint::AnyTransport)
        << false;

    const QVariantMap regions = AwsEndpointTestData::supportedServicesMap();
    for (QVariantMap::const_iterator region = regions.constBegin(); region != regions.constEnd(); ++region) {
        const QVariantMap services = region.value().toMap();
        for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
            for (int transports = 1; transports <= AwsEndpoint::AnyTransport; ++transports) {
                QTest::newRow(QString::fromLatin1("%1:%2:%3").arg(region.key()).arg(service.key()).arg(transports).toUtf8())
                    << region.key() << service.key() << AwsEndpoint::Transports(transports)
                    << ((service.value().toInt() & transports) ? true : false);
            }
        }
    }
}

void TestAwsEndpoint::isSupported_static()
{
    QFETCH(QString, regionName);
    QFETCH(QString, serviceName);
    QFETCH(AwsEndpoint::Transports, transports);
    QFETCH(bool, isSupported);

    QCOMPARE(AwsEndpoint::isSupported(regionName, serviceName, transports), isSupported);
}

void TestAwsEndpoint::fullServiceName_data()
{
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<QString>("fullServiceName");

    QTest::newRow("null")     << QString() << QString();
    QTest::newRow("empty")    << QString::fromLatin1("") << QString();
    QTest::newRow("space")    << QString::fromLatin1(" ") << QString();
    QTest::newRow("spaces")   << QString::fromLatin1("  ") << QString();
    QTest::newRow("jiberish") << QString::fromLatin1("dhfkjshdkfjhsdkfhkjsdhkfhksdjfhkjsdhfkjsdhkf") << QString();

    const QVariantMap services = AwsEndpointTestData::fullServiceNames();
    for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
        QTest::newRow(service.key().toUtf8()) << service.key() << service.value().toString();
    }
}

void TestAwsEndpoint::fullServiceName()
{
    QFETCH(QString, serviceName);
    QFETCH(QString, fullServiceName);

    // Static version.
    QCOMPARE(AwsEndpoint::fullServiceName(serviceName), fullServiceName);

    // Non-static version.
    // Here's we're taking advantage of the fact that *all* services are available in us-east-1.
    const AwsEndpoint endpoint(AwsEndpoint::getEndpoint(QLatin1String("us-east-1"), serviceName).host());
    QCOMPARE(endpoint.fullServiceName(), fullServiceName);
}

void TestAwsEndpoint::supportedRegions_data()
{
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<AwsEndpoint::Transports>("transport");
    QTest::addColumn<QStringList>("expectedRegions");

    QTest::newRow("null")           << QString()  << AwsEndpoint::Transports() << QStringList();
    QTest::newRow("does not exist") << QString()  << AwsEndpoint::Transports() << QStringList();

    const QVariantMap services = AwsEndpointTestData::supportedRegionsMap();
    for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
        const QVariantMap regions = service.value().toMap();
        for (int transports = 1; transports <= AwsEndpoint::AnyTransport; ++transports) {
            QStringList supportedRegions;
            for (QVariantMap::const_iterator region = regions.constBegin(); region != regions.constEnd(); ++region) {
                if (region.value().toInt() & transports) {
                    supportedRegions.append(region.key());
                }
            }
            QTest::newRow(QString::fromLatin1("%1:%2").arg(service.key()).arg(transports).toUtf8())
                << service.key() << AwsEndpoint::Transports(transports) << supportedRegions;
        }
    }
}

void TestAwsEndpoint::supportedRegions()
{
    QFETCH(QString, serviceName);
    QFETCH(AwsEndpoint::Transports, transport);
    QFETCH(QStringList, expectedRegions);

    const QStringList regions = AwsEndpoint::supportedRegions(serviceName, transport);
    foreach (const QString &region, expectedRegions) {
        QVERIFY2(regions.contains(region), region.toLatin1());
    }
    QCOMPARE(regions.size(), expectedRegions.size());

    // Test the non-static AwsEndpoint::supportRegions version too.
    if (!expectedRegions.empty()) {
        const AwsEndpoint endpoint(AwsEndpoint::getEndpoint(expectedRegions.first(), serviceName).host());
        const QStringList regions = endpoint.supportedRegions(transport);
        foreach (const QString &region, expectedRegions) {
            QVERIFY2(regions.contains(region), region.toLatin1());
        }
        QCOMPARE(regions.size(), expectedRegions.size());
    }
}

void TestAwsEndpoint::supportedServices_data()
{
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<AwsEndpoint::Transports>("transport");
    QTest::addColumn<QStringList>("expectedServices");

    QTest::newRow("null")           << QString()  << AwsEndpoint::Transports() << QStringList();
    QTest::newRow("does not exist") << QString()  << AwsEndpoint::Transports() << QStringList();

    const QVariantMap regions = AwsEndpointTestData::supportedServicesMap();
    for (QVariantMap::const_iterator region = regions.constBegin(); region != regions.constEnd(); ++region) {
        for (int transports = 1; transports <= AwsEndpoint::AnyTransport; ++transports) {
            QStringList supportedServices;
            const QVariantMap services = region.value().toMap();
            for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
                if (service.value().toInt() & transports) {
                    supportedServices.append(service.key());
                }
            }
            QTest::newRow(QString::fromLatin1("%1:%2").arg(region.key()).arg(transports).toLatin1())
                << region.key() << AwsEndpoint::Transports(transports) << supportedServices;
        }
    }
}

void TestAwsEndpoint::supportedServices()
{
    QFETCH(QString, regionName);
    QFETCH(AwsEndpoint::Transports, transport);
    QFETCH(QStringList, expectedServices);

    const QStringList services = AwsEndpoint::supportedServices(regionName, transport);
    foreach (const QString &service, expectedServices) {
        QVERIFY2(services.contains(service), service.toLatin1());
    }
    QCOMPARE(services.size(), expectedServices.size());
}

void TestAwsEndpoint::loadEndpointData_QString()
{
    AwsEndpointPrivate::loadEndpointData();

    QList<QByteArray> hosts;
    foreach (const QString &host, AwsEndpointTestData::hostInfoMap().keys()) {
        hosts << host.toUtf8();
    }

    QList<QByteArray> regions;
    foreach (const QString &region, AwsEndpointTestData::supportedServicesMap().keys()) {
        regions << region.toUtf8();
    }

    QList<QByteArray> services;
    foreach (const QString &service, AwsEndpointTestData::supportedRegionsMap().keys()) {
        services << service.toUtf8();
    }

    QCOMPARE(AwsEndpointPrivate::hosts.size(), hosts.size());
    QCOMPARE(AwsEndpointPrivate::regions.size(), regions.size());
    QCOMPARE(AwsEndpointPrivate::services.size(), services.size());

    foreach (const QByteArray &host, hosts) {
        QVERIFY2(AwsEndpointPrivate::hosts.contains(QLatin1String(host)), host);
    }

    foreach (const QByteArray &region, regions) {
        QVERIFY2(AwsEndpointPrivate::regions.contains(QLatin1String(region)), region);
    }

    foreach (const QByteArray &service, services) {
        QVERIFY2(AwsEndpointPrivate::services.contains(QLatin1String(service)), service);
    }
}

void TestAwsEndpoint::loadEndpointData_QIODevice()
{
    // The "working" scenario is already tested by loadEndpointData_QString
    // above, so here we're just testing some failure scenarios.

    // Loading data from an un-opennable device should fail gracefully.
    QFile device;
    QTest::ignoreMessage(QtWarningMsg, "QFSFileEngine::open: No file name specified");
    QTest::ignoreMessage(QtWarningMsg, "AwsEndpoint: \"No file name specified\" ");
    AwsEndpointPrivate::loadEndpointData(device);

    // If data has been loaded previously, the device is ignored.
    AwsEndpointPrivate::loadEndpointData();
    AwsEndpointPrivate::loadEndpointData(device);
}

void TestAwsEndpoint::loadEndpointData_QXmlStreamReader()
{
    // The "working" scenario is already tested by loadEndpointData_QString
    // above, so here we're just testing some failure scenarios.

    QXmlStreamReader xml1(QByteArray("<unrecognised_element/>"));
    AwsEndpointPrivate::loadEndpointData(xml1);

    QXmlStreamReader xml2(QByteArray("not valid xml"));
    QTest::ignoreMessage(QtWarningMsg, "AwsEndpoint: \"Start tag expected.\" ");
    AwsEndpointPrivate::loadEndpointData(xml2);
}

void TestAwsEndpoint::parseRegion()
{
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
    const QByteArray service1(
        "<Service>"
            "<Name>service1</Name>"
            "<FullName>The First Service</FullName>"
            "<RegionName>region1</RegionName>"
            "<RegionName>region2</RegionName>"
            "<RegionName>region3</RegionName>"
            "<RegionName>region4</RegionName>"
            "<foo>ignored</foo>"
        "</Service>");

    QXmlStreamReader xml1(service1);
    xml1.readNextStartElement();
    AwsEndpointPrivate::parseService(xml1);
    QCOMPARE(AwsEndpointPrivate::services.size(), 1);
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].fullName, QLatin1String("The First Service"));
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].regionNames.size(), 4);
    for (int index = 1; index <= 4; ++index) {
        QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].regionNames[index-1],
                 QString::fromLatin1("region%1").arg(index));
    }

    const QByteArray service2(
        "<Service>"
            "<foo>ignored</foo>"
            "<Name>service2</Name>"
            "<FullName>The Second Service</FullName>"
            "<RegionName>region1</RegionName>"
            "<RegionName>region2</RegionName>"
            "<foo>ignored</foo>"
            "<RegionName>region1000</RegionName>"
            "<foo>ignored</foo>"
        "</Service>");

    QXmlStreamReader xml2(service2);
    xml2.readNextStartElement();
    AwsEndpointPrivate::parseService(xml2);
    QCOMPARE(AwsEndpointPrivate::services.size(), 2);
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].fullName, QLatin1String("The First Service"));
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].fullName, QLatin1String("The Second Service"));
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].regionNames.size(), 4);
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].regionNames.size(), 3);
    for (int index = 1; index <= 4; ++index) {
        QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].regionNames[index-1],
                QString::fromLatin1("region%1").arg(index));
        if (index <= 2) {
            QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].regionNames[index-1],
                     QString::fromLatin1("region%1").arg(index));
        }
    }
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].regionNames[2], QLatin1String("region1000"));
}

void TestAwsEndpoint::parseServices()
{
    const QByteArray services(
        "<Services>"
            "<Service>"
                "<Name>service1</Name>"
                "<FullName>The First Service</FullName>"
                "<RegionName>region1</RegionName>"
                "<RegionName>region2</RegionName>"
                "<RegionName>region3</RegionName>"
                "<RegionName>region4</RegionName>"
                "<foo>ignored</foo>"
            "</Service>"
            "<foo>ignored</foo>"
            "<Service>"
                "<foo>ignored</foo>"
                "<Name>service2</Name>"
                "<FullName>The Second Service</FullName>"
                "<RegionName>region1</RegionName>"
                "<RegionName>region2</RegionName>"
                "<foo>ignored</foo>"
                "<RegionName>region1000</RegionName>"
                "<foo>ignored</foo>"
            "</Service>"
        "</Services>");

    QXmlStreamReader xml(services);
    xml.readNextStartElement();
    AwsEndpointPrivate::parseServices(xml);
    QCOMPARE(AwsEndpointPrivate::services.size(), 2);
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].fullName, QLatin1String("The First Service"));
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].fullName, QLatin1String("The Second Service"));
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].regionNames.size(), 4);
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].regionNames.size(), 3);
    for (int index = 1; index <= 4; ++index) {
        QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service1")].regionNames[index-1],
                QString::fromLatin1("region%1").arg(index));
        if (index <= 2) {
            QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].regionNames[index-1],
                     QString::fromLatin1("region%1").arg(index));
        }
    }
    QCOMPARE(AwsEndpointPrivate::services[QLatin1String("service2")].regionNames[2], QLatin1String("region1000"));
}
