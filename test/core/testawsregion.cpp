#include "testawsregion.h"

#include "../../src/core/awsendpoint.h"
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
    /// @todo
}

void TestAwsRegion::hostName()
{
    /// @todo
}

void TestAwsRegion::isSupported_data()
{
    QTest::addColumn<AwsRegion::Region>("region");
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<AwsEndpoint::Transports>("transports");
    QTest::addColumn<bool>("isSupported");

    const QVariantMap regions = supportedServicesMap();
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
    qDebug() << region << serviceName << transports << isSupported;
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

    const QVariantMap regions = supportedServicesMap();
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

/*
 * This function builds a map of regionName -> serivceName -> (int)transports
 * for every region and serice AWS supports!  Not only does this test the
 * AwsRegion class quite thoroughly, but also the underlying AwsEndpoint class
 * and embedded endpoint.xml data file.
 */
// cat ../qrc/endpoints.xml | tr -d '\n' | sed -e 's/<Services>/\n/g' | head -1 | sed -e 's/<Region>/\n/g' | sed -re 's|<ServiceName>([^<]+)</ServiceName>\s*<Http>([^<]+)</Http>\s*<Https>([^<]+)</Https>|[MAP, "\1", HTTP:\2\|HTTPS:\3]|g' | sed -re 's/Hostname|Endpoint/\n/g' | grep -E 'Name|\[' | sed -re 's/.*<Name>([^<]+)<\/Name>.*/\1/' | sed -e 's/^>\s*//' | sed -e 's/\s*<$//'
QVariantMap TestAwsRegion::supportedServicesMap()
{
    #define ADD_SERVICE(region, service, transports) region.insert(QLatin1String(service), static_cast<int>(transports))

    QVariantMap AP_Northeast_1;
    ADD_SERVICE(AP_Northeast_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Northeast_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap AP_Southeast_1;
    ADD_SERVICE(AP_Southeast_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap AP_Southeast_2;
    ADD_SERVICE(AP_Southeast_2, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(AP_Southeast_2, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap EU_West_1;
    ADD_SERVICE(EU_West_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(EU_West_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap SA_East_1;
    ADD_SERVICE(SA_East_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(SA_East_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap US_East_1;
    ADD_SERVICE(US_East_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "email", AwsEndpoint::HTTPS|AwsEndpoint::SMTP);
    ADD_SERVICE(US_East_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "support", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "datapipeline", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "opsworks", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_East_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap US_Gov_West_1;
    ADD_SERVICE(US_Gov_West_1, "monitoring", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "dynamodb", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "ec2", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_Gov_West_1, "swf", AwsEndpoint::HTTPS);

    QVariantMap US_West_1;
    ADD_SERVICE(US_West_1, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_1, "elastictranscoder", AwsEndpoint::HTTPS);

    QVariantMap US_West_2;
    ADD_SERVICE(US_West_2, "cloudformation", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "cloudfront", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "cloudsearch", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "monitoring", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "dynamodb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "ec2", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticmapreduce", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticache", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "rds", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "route53", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sdb", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sns", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sqs", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "s3", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "autoscaling", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticbeanstalk", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "iam", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "importexport", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "sts", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "storagegateway", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elasticloadbalancing", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "swf", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "glacier", AwsEndpoint::HTTP|AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "directconnect", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "redshift", AwsEndpoint::HTTPS);
    ADD_SERVICE(US_West_2, "elastictranscoder", AwsEndpoint::HTTPS);

    #undef ADD_SERVICE

    QVariantMap map;
    #define ADD_REGION(regionName, regionMap) map.insert(QLatin1String(regionName), regionMap)
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
