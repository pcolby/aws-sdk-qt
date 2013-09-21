#include "testawsregion.h"

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsregion.h"

Q_DECLARE_METATYPE(AwsRegion::Region)
Q_DECLARE_METATYPE(AwsEndpoint::Transport)
Q_DECLARE_METATYPE(AwsEndpoint::Transports)

TestAwsRegion::RegionNameToEnumMap TestAwsRegion::regionNameToEnum()
{
    RegionNameToEnumMap map;
    #define ADD_REGION(name, enum) map.insert(QLatin1String(name), AwsRegion::enum)
    ADD_REGION("ap-northeast-1", AP_Northeast_1);
    ADD_REGION("ap-southeast-1", AP_Southeast_1);
    ADD_REGION("ap-southeast-2", AP_Southeast_2);
    ADD_REGION("eu-east-1",      EU_Eest_1);
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
    NEW_ROW(EU_Eest_1,      "EU (Ireland) Region");
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
    /// @todo
}

void TestAwsRegion::hostName()
{
    /// @todo
}

void TestAwsRegion::isSupported_data()
{
    /// @todo
}

void TestAwsRegion::isSupported()
{
    /// @todo
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
    /// @todo
}

void TestAwsRegion::supportedServices()
{
    /// @todo
}
