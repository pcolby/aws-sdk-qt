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

#include "testawsregion.h"
#include "awsendpointtestdata.h"

#include "../../src/core/awsregion.h"

Q_DECLARE_METATYPE(AwsRegion::Region)
Q_DECLARE_METATYPE(AwsEndpoint::Transports)

TestAwsRegion::RegionNameToEnumMap TestAwsRegion::regionNameToEnum()
{
    RegionNameToEnumMap map;
    #define ADD_REGION(name, enum) map.insert(QLatin1String(name), AwsRegion::enum)
    ADD_REGION("ap-northeast-1", AP_Northeast_1);
    ADD_REGION("ap-southeast-1", AP_Southeast_1);
    ADD_REGION("ap-southeast-2", AP_Southeast_2);
    ADD_REGION("eu-west-1",      EU_West_1);
    ADD_REGION("sa-east-1",      SA_East_1);
    ADD_REGION("us-east-1",      US_East_1);
    ADD_REGION("us-gov-west-1",  US_Gov_West_1);
    ADD_REGION("us-west-1",      US_West_1);
    ADD_REGION("us-west-2",      US_West_2);
    #undef ADD_REGION
    return map;
}

void TestAwsRegion::construct_Region_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    QTest::addColumn<bool>("isValid");

    QTest::newRow("InvalidRegion") << AwsRegion::InvalidRegion << false;

    const RegionNameToEnumMap regions = regionNameToEnum();
    for (RegionNameToEnumMap::const_iterator region = regions.begin(); region != regions.end(); ++region) {
        QTest::newRow(region.key().toLatin1()) << region.value() << true;
    }
}

void TestAwsRegion::construct_Region()
{
    QFETCH(AwsRegion::Region, region);
    QFETCH(bool, isValid);

    QCOMPARE(AwsRegion(region).region(), region);
    QCOMPARE(AwsRegion(region).isValid(), isValid);
}

void TestAwsRegion::construct_QString_data()
{
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<AwsRegion::Region>("regionEnum");
    QTest::addColumn<bool>("isValid");

    // Some invalid regions - these should all be invalid.
    QTest::newRow("null")      << QString()                              << AwsRegion::InvalidRegion << false;
    QTest::newRow("empty")     << QString::fromLatin1("")                << AwsRegion::InvalidRegion << false;
    QTest::newRow("jibberish") << QString::fromLatin1("kjsdhskdhjhskdh") << AwsRegion::InvalidRegion << false;

    // The real regions - in default, upper and lower case.
    const RegionNameToEnumMap regions = regionNameToEnum();
    for (RegionNameToEnumMap::const_iterator region = regions.begin(); region != regions.end(); ++region) {
        QTest::newRow(region.key().toLatin1()) << region.key() << region.value() << true;
        QTest::newRow(region.key().toUpper().toLatin1()) << region.key().toUpper() << region.value() << true;
        QTest::newRow(region.key().toLower().toLatin1()) << region.key().toLower() << region.value() << true;
    }
}

void TestAwsRegion::construct_QString()
{
    QFETCH(QString, regionName);
    QFETCH(AwsRegion::Region, regionEnum);
    QFETCH(bool, isValid);

    QCOMPARE(AwsRegion(regionName).region(), regionEnum);
    QCOMPARE(AwsRegion(regionName).isValid(), isValid);
}

void TestAwsRegion::fullName_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    QTest::addColumn<QString>("fullName");

    QTest::newRow("InvalidRegion") << AwsRegion::InvalidRegion << QString();

    #define NEW_ROW(region, fullName) QTest::newRow(#region) << AwsRegion::region << QString::fromLatin1(fullName)
    NEW_ROW(AP_Northeast_1, "Asia Pacific (Tokyo) Region");
    NEW_ROW(AP_Southeast_1, "Asia Pacific (Singapore) Region");
    NEW_ROW(AP_Southeast_2, "Asia Pacific (Sydney) Region");
    NEW_ROW(EU_West_1,      "EU (Ireland) Region");
    NEW_ROW(SA_East_1,      "São Paulo Region");
    NEW_ROW(US_East_1,      "US East (Northern Virginia) Region");
    NEW_ROW(US_Gov_West_1,  "AWS GovCloud (US) Region");
    NEW_ROW(US_West_1,      "US West (Northern California) Region");
    NEW_ROW(US_West_2,      "US West (Oregon) Region");
    #undef NEW_ROW
}

void TestAwsRegion::fullName()
{
    QFETCH(AwsRegion::Region, region);
    QFETCH(QString, fullName);

    // The static version.
    QCOMPARE(AwsRegion::fullName(region), fullName);

    // The non-static version.
    QCOMPARE(AwsRegion(region).fullName(), fullName);
}

void TestAwsRegion::fromName_data()
{
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<AwsRegion::Region>("regionEnum");

    // Some invalid regions - these should all be invalid.
    QTest::newRow("null")      << QString()                              << AwsRegion::InvalidRegion;
    QTest::newRow("empty")     << QString::fromLatin1("")                << AwsRegion::InvalidRegion;
    QTest::newRow("jibberish") << QString::fromLatin1("kjsdhskdhjhskdh") << AwsRegion::InvalidRegion;

    // The real regions - in default, upper and lower case.
    const RegionNameToEnumMap regions = regionNameToEnum();
    for (RegionNameToEnumMap::const_iterator region = regions.begin(); region != regions.end(); ++region) {
        QTest::newRow(region.key().toLatin1()) << region.key() << region.value();
        QTest::newRow(region.key().toUpper().toLatin1()) << region.key().toUpper() << region.value();
        QTest::newRow(region.key().toLower().toLatin1()) << region.key().toLower() << region.value();
    }
}

void TestAwsRegion::fromName()
{
    QFETCH(QString, regionName);
    QFETCH(AwsRegion::Region, regionEnum);
    QCOMPARE(AwsRegion::fromName(regionName), regionEnum);
}

void TestAwsRegion::hostName_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<QString>("hostName");

    const QVariantMap regions = AwsEndpointTestData::regionServiceHosts();
    for (QVariantMap::const_iterator region = regions.constBegin(); region != regions.constEnd(); ++region) {
        const QVariantMap services = region.value().toMap();
        for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
            QTest::newRow(QString::fromLatin1("%1:%2").arg(region.key()).arg(service.key()).toLatin1())
                << AwsRegion::fromName(region.key()) << service.key() << service.value().toString();
        }
        QTest::newRow(QString::fromLatin1("%1:null").arg(region.key()).toLatin1())
            << AwsRegion::fromName(region.key()) << QString() << QString();
        QTest::newRow(QString::fromLatin1("%1:empty").arg(region.key()).toLatin1())
            << AwsRegion::fromName(region.key()) << QString::fromLatin1("") << QString();
        QTest::newRow(QString::fromLatin1("%1:jibberish").arg(region.key()).toLatin1())
            << AwsRegion::fromName(region.key()) << QString::fromLatin1("lskdjsld89398msixjk") << QString();
    }
}

void TestAwsRegion::hostName()
{
    QFETCH(AwsRegion::Region, region);
    QFETCH(QString, serviceName);
    QFETCH(QString, hostName);
    QCOMPARE(AwsRegion(region).hostName(serviceName), hostName);
}

void TestAwsRegion::isSupported_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<AwsEndpoint::Transports>("transports");
    QTest::addColumn<bool>("isSupported");

    const QVariantMap regions = AwsEndpointTestData::supportedServicesMap();
    for (QVariantMap::const_iterator region = regions.constBegin(); region != regions.constEnd(); ++region) {
        const QVariantMap services = region.value().toMap();
        for (QVariantMap::const_iterator service = services.constBegin(); service != services.constEnd(); ++service) {
            for (int transports = 1; transports <= AwsEndpoint::AnyTransport; ++transports) {
                QTest::newRow(QString::fromLatin1("%1:%2:%3").arg(region.key()).arg(service.key()).arg(transports).toLatin1())
                    << AwsRegion::fromName(region.key()) << service.key() << AwsEndpoint::Transports(transports)
                    << ((service.value().toInt() & transports) ? true : false);
            }
        }
    }
}

void TestAwsRegion::isSupported()
{
    QFETCH(AwsRegion::Region, region);
    QFETCH(QString, serviceName);
    QFETCH(AwsEndpoint::Transports, transports);
    QFETCH(bool, isSupported);
    QCOMPARE(AwsRegion(region).isSupported(serviceName, transports), isSupported);
}

void TestAwsRegion::name_data()
{
    QTest::addColumn<AwsRegion::Region>("regionEnum");
    QTest::addColumn<QString>("regionName");

    QTest::newRow("InvalidRegion") << AwsRegion::InvalidRegion << QString();

    const RegionNameToEnumMap regions = regionNameToEnum();
    for (RegionNameToEnumMap::const_iterator region = regions.begin(); region != regions.end(); ++region) {
        QTest::newRow(region.key().toLatin1()) << region.value() << region.key();
    }
}

void TestAwsRegion::name()
{
    QFETCH(AwsRegion::Region, regionEnum);
    QFETCH(QString, regionName);

    // Static version.
    QCOMPARE(AwsRegion::name(regionEnum), regionName);

    // Non-static version.
    QCOMPARE(AwsRegion(regionEnum).name(), regionName);
}

void TestAwsRegion::supportedServices_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    QTest::addColumn<AwsEndpoint::Transports>("transports");
    QTest::addColumn<QStringList>("services");

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
            supportedServices.sort();
            QTest::newRow(QString::fromLatin1("%1:%2").arg(region.key()).arg(transports).toLatin1())
                << AwsRegion::fromName(region.key()) << AwsEndpoint::Transports(transports) << supportedServices;
        }
    }
}

void TestAwsRegion::supportedServices()
{
    QFETCH(AwsRegion::Region, region);
    QFETCH(AwsEndpoint::Transports, transports);
    QFETCH(QStringList, services);

    QStringList result = AwsRegion(region).supportedServices(transports);
    result.sort();
    QCOMPARE(result, services);
}
