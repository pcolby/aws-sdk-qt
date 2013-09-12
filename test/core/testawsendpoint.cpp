#include "testawsendpoint.h"

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsendpoint_p.h"

Q_DECLARE_METATYPE(AwsEndpoint::Transports)

void TestAwsEndpoint::init() {
    AwsEndpointPrivate::hosts.clear();
    AwsEndpointPrivate::regions.clear();
    AwsEndpointPrivate::services.clear();
}


void TestAwsEndpoint::supportedRegions_data()
{
    QTest::addColumn<QString>("serviceName");
    QTest::addColumn<AwsEndpoint::Transports>("transport");
    QTest::addColumn<QStringList>("expectedRegions");

    QTest::newRow("null")           << QString()  << AwsEndpoint::Transports() << QStringList();
    QTest::newRow("does not exist") << QString()  << AwsEndpoint::Transports() << QStringList();

    QStringList cloudformationRegions;
    cloudformationRegions
        << QLatin1String("us-east-1")
        << QLatin1String("us-west-1")
        << QLatin1String("us-west-2")
        << QLatin1String("eu-west-1")
        << QLatin1String("ap-northeast-1")
        << QLatin1String("ap-southeast-1")
        << QLatin1String("ap-southeast-2")
        << QLatin1String("sa-east-1");
    QTest::newRow("cloudformation.HTTP")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::Transports(AwsEndpoint::HTTP)
        << QStringList();
    QTest::newRow("cloudformation.HTTPS")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::Transports(AwsEndpoint::HTTPS)
        << cloudformationRegions;
    QTest::newRow("cloudformation.SMTP")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::Transports(AwsEndpoint::SMTP)
        << QStringList();
    QTest::newRow("cloudformation.AnyTransport")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::Transports(AwsEndpoint::AnyTransport)
        << cloudformationRegions;

    QStringList cloudfrontRegions;
    cloudfrontRegions
        << QLatin1String("us-east-1")
        << QLatin1String("us-west-1")
        << QLatin1String("us-west-2")
        << QLatin1String("eu-west-1")
        << QLatin1String("ap-northeast-1")
        << QLatin1String("ap-southeast-1")
        << QLatin1String("ap-southeast-2")
        << QLatin1String("sa-east-1");
    QTest::newRow("cloudfront.HTTP")
        << QString::fromLatin1("cloudfront")
        << AwsEndpoint::Transports(AwsEndpoint::HTTP)
        << cloudfrontRegions;
    QTest::newRow("cloudfront.HTTPS")
        << QString::fromLatin1("cloudfront")
        << AwsEndpoint::Transports(AwsEndpoint::HTTPS)
        << cloudfrontRegions;
    QTest::newRow("cloudfront.SMTP")
        << QString::fromLatin1("cloudfront")
        << AwsEndpoint::Transports(AwsEndpoint::SMTP)
        << QStringList();
    QTest::newRow("cloudfront.AnyTransport")
        << QString::fromLatin1("cloudfront")
        << AwsEndpoint::Transports(AwsEndpoint::AnyTransport)
        << cloudfrontRegions;

    QStringList elastictranscoderRegions;
    elastictranscoderRegions
        << QLatin1String("us-east-1")
        << QLatin1String("us-west-1")
        << QLatin1String("us-west-2")
        << QLatin1String("eu-west-1")
        << QLatin1String("ap-northeast-1")
        << QLatin1String("ap-southeast-1")
        << QLatin1String("ap-southeast-2")
        << QLatin1String("sa-east-1");
    QTest::newRow("elastictranscoder.HTTP")
        << QString::fromLatin1("elastictranscoder")
        << AwsEndpoint::Transports(AwsEndpoint::HTTP)
        << QStringList();
    QTest::newRow("elastictranscoder.HTTPS")
        << QString::fromLatin1("elastictranscoder")
        << AwsEndpoint::Transports(AwsEndpoint::HTTPS)
        << elastictranscoderRegions;
    QTest::newRow("elastictranscoder.SMTP")
        << QString::fromLatin1("elastictranscoder")
        << AwsEndpoint::Transports(AwsEndpoint::SMTP)
        << QStringList();
    QTest::newRow("elastictranscoder.AnyTransport")
        << QString::fromLatin1("elastictranscoder")
        << AwsEndpoint::Transports(AwsEndpoint::AnyTransport)
        << elastictranscoderRegions;
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
}

void TestAwsEndpoint::supportedServices_data()
{
    QTest::addColumn<QString>("regionName");
    QTest::addColumn<AwsEndpoint::Transports>("transport");
    QTest::addColumn<QStringList>("expectedServices");

    QTest::newRow("null")           << QString()  << AwsEndpoint::Transports() << QStringList();
    QTest::newRow("does not exist") << QString()  << AwsEndpoint::Transports() << QStringList();

    QStringList useast1ServicesHttp;
    useast1ServicesHttp
        << QLatin1String("cloudfront")
        << QLatin1String("monitoring")
        << QLatin1String("dynamodb")
        << QLatin1String("ec2")
        << QLatin1String("elasticmapreduce")
        << QLatin1String("sdb")
        << QLatin1String("sns")
        << QLatin1String("sqs")
        << QLatin1String("s3")
        << QLatin1String("autoscaling")
        << QLatin1String("elasticloadbalancing")
        << QLatin1String("glacier");

    QStringList useast1ServicesHttps;
    useast1ServicesHttps
        << QLatin1String("cloudformation")
        << QLatin1String("cloudfront")
        << QLatin1String("cloudsearch")
        << QLatin1String("monitoring")
        << QLatin1String("dynamodb")
        << QLatin1String("ec2")
        << QLatin1String("elasticmapreduce")
        << QLatin1String("elasticache")
        << QLatin1String("rds")
        << QLatin1String("route53")
        << QLatin1String("email")
        << QLatin1String("sdb")
        << QLatin1String("sns")
        << QLatin1String("sqs")
        << QLatin1String("s3")
        << QLatin1String("autoscaling")
        << QLatin1String("elasticbeanstalk")
        << QLatin1String("iam")
        << QLatin1String("importexport")
        << QLatin1String("sts")
        << QLatin1String("storagegateway")
        << QLatin1String("support")
        << QLatin1String("elasticloadbalancing")
        << QLatin1String("swf")
        << QLatin1String("glacier")
        << QLatin1String("directconnect")
        << QLatin1String("datapipeline")
        << QLatin1String("redshift")
        << QLatin1String("opsworks")
        << QLatin1String("elastictranscoder");

    QStringList useast1ServicesSmtp;
    useast1ServicesSmtp << QLatin1String("email");

    QTest::newRow("us-east-1.HTTP")
        << QString::fromLatin1("us-east-1")
        << AwsEndpoint::Transports(AwsEndpoint::HTTP)
        << useast1ServicesHttp;
    QTest::newRow("us-east-1.HTTPS")
        << QString::fromLatin1("us-east-1")
        << AwsEndpoint::Transports(AwsEndpoint::HTTPS)
        << useast1ServicesHttps;
    QTest::newRow("us-east-1.SMTP")
        << QString::fromLatin1("us-east-1")
        << AwsEndpoint::Transports(AwsEndpoint::SMTP)
        << useast1ServicesSmtp;
    QTest::newRow("us-east-1.AnyTransport")
        << QString::fromLatin1("us-east-1")
        << AwsEndpoint::Transports(AwsEndpoint::AnyTransport)
        << useast1ServicesHttps;

}

void TestAwsEndpoint::supportedServices()
{
    QFETCH(QString, regionName);
    QFETCH(AwsEndpoint::Transports, transport);
    QFETCH(QStringList, expectedServices);

    {
        const QStringList services = AwsEndpoint::supportedServices(regionName, transport);
        foreach (const QString &service, expectedServices) {
            QVERIFY2(services.contains(service), service.toLatin1());
        }
        QCOMPARE(services.size(), expectedServices.size());
    }

    {
        AwsEndpoint endpoint(regionName, QLatin1String("aaa"));
        const QStringList services = endpoint.supportedServices(transport);
        foreach (const QString &service, expectedServices) {
            QVERIFY2(services.contains(service), service.toLatin1());
        }
        qDebug() << services;
        QCOMPARE(services.size(), expectedServices.size());
    }
}

void TestAwsEndpoint::loadEndpointData()
{
    AwsEndpointPrivate::loadEndpointData();

    // sed -nre 's/.*<Hostname>(.*)<.*/<< "\1"/p' ../qrc/endpoints.xml | sort -u
    QList<QByteArray> hosts;
    hosts
        << "autoscaling.ap-northeast-1.amazonaws.com"
        << "autoscaling.ap-southeast-1.amazonaws.com"
        << "autoscaling.ap-southeast-2.amazonaws.com"
        << "autoscaling.eu-west-1.amazonaws.com"
        << "autoscaling.sa-east-1.amazonaws.com"
        << "autoscaling.us-east-1.amazonaws.com"
        << "autoscaling.us-gov-west-1.amazonaws.com"
        << "autoscaling.us-west-1.amazonaws.com"
        << "autoscaling.us-west-2.amazonaws.com"
        << "cloudformation.ap-northeast-1.amazonaws.com"
        << "cloudformation.ap-southeast-1.amazonaws.com"
        << "cloudformation.ap-southeast-2.amazonaws.com"
        << "cloudformation.eu-west-1.amazonaws.com"
        << "cloudformation.sa-east-1.amazonaws.com"
        << "cloudformation.us-east-1.amazonaws.com"
        << "cloudformation.us-west-1.amazonaws.com"
        << "cloudformation.us-west-2.amazonaws.com"
        << "cloudfront.amazonaws.com"
        << "cloudsearch.ap-southeast-1.amazonaws.com"
        << "cloudsearch.eu-west-1.amazonaws.com"
        << "cloudsearch.us-east-1.amazonaws.com"
        << "cloudsearch.us-west-1.amazonaws.com"
        << "cloudsearch.us-west-2.amazonaws.com"
        << "datapipeline.us-east-1.amazonaws.com"
        << "directconnect.ap-northeast-1.amazonaws.com"
        << "directconnect.ap-southeast-1.amazonaws.com"
        << "directconnect.ap-southeast-2.amazonaws.com"
        << "directconnect.eu-west-1.amazonaws.com"
        << "directconnect.sa-east-1.amazonaws.com"
        << "directconnect.us-east-1.amazonaws.com"
        << "directconnect.us-west-1.amazonaws.com"
        << "directconnect.us-west-2.amazonaws.com"
        << "dynamodb.ap-northeast-1.amazonaws.com"
        << "dynamodb.ap-southeast-1.amazonaws.com"
        << "dynamodb.ap-southeast-2.amazonaws.com"
        << "dynamodb.eu-west-1.amazonaws.com"
        << "dynamodb.sa-east-1.amazonaws.com"
        << "dynamodb.us-east-1.amazonaws.com"
        << "dynamodb.us-gov-west-1.amazonaws.com"
        << "dynamodb.us-west-1.amazonaws.com"
        << "dynamodb.us-west-2.amazonaws.com"
        << "ec2.ap-northeast-1.amazonaws.com"
        << "ec2.ap-southeast-1.amazonaws.com"
        << "ec2.ap-southeast-2.amazonaws.com"
        << "ec2.eu-west-1.amazonaws.com"
        << "ec2.sa-east-1.amazonaws.com"
        << "ec2.us-east-1.amazonaws.com"
        << "ec2.us-gov-west-1.amazonaws.com"
        << "ec2.us-west-1.amazonaws.com"
        << "ec2.us-west-2.amazonaws.com"
        << "elasticache.ap-northeast-1.amazonaws.com"
        << "elasticache.ap-southeast-1.amazonaws.com"
        << "elasticache.ap-southeast-2.amazonaws.com"
        << "elasticache.eu-west-1.amazonaws.com"
        << "elasticache.sa-east-1.amazonaws.com"
        << "elasticache.us-east-1.amazonaws.com"
        << "elasticache.us-west-1.amazonaws.com"
        << "elasticache.us-west-2.amazonaws.com"
        << "elasticbeanstalk.ap-northeast-1.amazonaws.com"
        << "elasticbeanstalk.ap-southeast-1.amazonaws.com"
        << "elasticbeanstalk.ap-southeast-2.amazonaws.com"
        << "elasticbeanstalk.eu-west-1.amazonaws.com"
        << "elasticbeanstalk.sa-east-1.amazonaws.com"
        << "elasticbeanstalk.us-east-1.amazonaws.com"
        << "elasticbeanstalk.us-west-1.amazonaws.com"
        << "elasticbeanstalk.us-west-2.amazonaws.com"
        << "elasticloadbalancing.ap-northeast-1.amazonaws.com"
        << "elasticloadbalancing.ap-southeast-1.amazonaws.com"
        << "elasticloadbalancing.ap-southeast-2.amazonaws.com"
        << "elasticloadbalancing.eu-west-1.amazonaws.com"
        << "elasticloadbalancing.sa-east-1.amazonaws.com"
        << "elasticloadbalancing.us-east-1.amazonaws.com"
        << "elasticloadbalancing.us-gov-west-1.amazonaws.com"
        << "elasticloadbalancing.us-west-1.amazonaws.com"
        << "elasticloadbalancing.us-west-2.amazonaws.com"
        << "elasticmapreduce.ap-northeast-1.amazonaws.com"
        << "elasticmapreduce.ap-southeast-1.amazonaws.com"
        << "elasticmapreduce.ap-southeast-2.amazonaws.com"
        << "elasticmapreduce.eu-west-1.amazonaws.com"
        << "elasticmapreduce.sa-east-1.amazonaws.com"
        << "elasticmapreduce.us-east-1.amazonaws.com"
        << "elasticmapreduce.us-gov-west-1.amazonaws.com"
        << "elasticmapreduce.us-west-1.amazonaws.com"
        << "elasticmapreduce.us-west-2.amazonaws.com"
        << "elastictranscoder.ap-northeast-1.amazonaws.com"
        << "elastictranscoder.ap-southeast-1.amazonaws.com"
        << "elastictranscoder.ap-southeast-2.amazonaws.com"
        << "elastictranscoder.eu-west-1.amazonaws.com"
        << "elastictranscoder.sa-east-1.amazonaws.com"
        << "elastictranscoder.us-east-1.amazonaws.com"
        << "elastictranscoder.us-west-1.amazonaws.com"
        << "elastictranscoder.us-west-2.amazonaws.com"
        << "email.us-east-1.amazonaws.com"
        << "glacier.ap-northeast-1.amazonaws.com"
        << "glacier.eu-west-1.amazonaws.com"
        << "glacier.us-east-1.amazonaws.com"
        << "glacier.us-west-1.amazonaws.com"
        << "glacier.us-west-2.amazonaws.com"
        << "iam.amazonaws.com"
        << "iam.us-gov.amazonaws.com"
        << "importexport.amazonaws.com"
        << "monitoring.ap-northeast-1.amazonaws.com"
        << "monitoring.ap-southeast-1.amazonaws.com"
        << "monitoring.ap-southeast-2.amazonaws.com"
        << "monitoring.eu-west-1.amazonaws.com"
        << "monitoring.sa-east-1.amazonaws.com"
        << "monitoring.us-east-1.amazonaws.com"
        << "monitoring.us-gov-west-1.amazonaws.com"
        << "monitoring.us-west-1.amazonaws.com"
        << "monitoring.us-west-2.amazonaws.com"
        << "opsworks.us-east-1.amazonaws.com"
        << "rds.ap-northeast-1.amazonaws.com"
        << "rds.ap-southeast-1.amazonaws.com"
        << "rds.ap-southeast-2.amazonaws.com"
        << "rds.eu-west-1.amazonaws.com"
        << "rds.sa-east-1.amazonaws.com"
        << "rds.us-east-1.amazonaws.com"
        << "rds.us-gov-west-1.amazonaws.com"
        << "rds.us-west-1.amazonaws.com"
        << "rds.us-west-2.amazonaws.com"
        << "redshift.ap-northeast-1.amazonaws.com"
        << "redshift.eu-west-1.amazonaws.com"
        << "redshift.us-east-1.amazonaws.com"
        << "redshift.us-west-2.amazonaws.com"
        << "route53.amazonaws.com"
        << "s3.amazonaws.com"
        << "s3-ap-northeast-1.amazonaws.com"
        << "s3-ap-southeast-1.amazonaws.com"
        << "s3-ap-southeast-2.amazonaws.com"
        << "s3-eu-west-1.amazonaws.com"
        << "s3-sa-east-1.amazonaws.com"
        << "s3-us-gov-west-1.amazonaws.com"
        << "s3-us-west-1.amazonaws.com"
        << "s3-us-west-2.amazonaws.com"
        << "sdb.amazonaws.com"
        << "sdb.ap-northeast-1.amazonaws.com"
        << "sdb.ap-southeast-1.amazonaws.com"
        << "sdb.ap-southeast-2.amazonaws.com"
        << "sdb.eu-west-1.amazonaws.com"
        << "sdb.sa-east-1.amazonaws.com"
        << "sdb.us-west-1.amazonaws.com"
        << "sdb.us-west-2.amazonaws.com"
        << "sns.ap-northeast-1.amazonaws.com"
        << "sns.ap-southeast-1.amazonaws.com"
        << "sns.ap-southeast-2.amazonaws.com"
        << "sns.eu-west-1.amazonaws.com"
        << "sns.sa-east-1.amazonaws.com"
        << "sns.us-east-1.amazonaws.com"
        << "sns.us-gov-west-1.amazonaws.com"
        << "sns.us-west-1.amazonaws.com"
        << "sns.us-west-2.amazonaws.com"
        << "sqs.ap-northeast-1.amazonaws.com"
        << "sqs.ap-southeast-1.amazonaws.com"
        << "sqs.ap-southeast-2.amazonaws.com"
        << "sqs.eu-west-1.amazonaws.com"
        << "sqs.sa-east-1.amazonaws.com"
        << "sqs.us-east-1.amazonaws.com"
        << "sqs.us-gov-west-1.amazonaws.com"
        << "sqs.us-west-1.amazonaws.com"
        << "sqs.us-west-2.amazonaws.com"
        << "storagegateway.ap-northeast-1.amazonaws.com"
        << "storagegateway.ap-southeast-1.amazonaws.com"
        << "storagegateway.ap-southeast-2.amazonaws.com"
        << "storagegateway.eu-west-1.amazonaws.com"
        << "storagegateway.sa-east-1.amazonaws.com"
        << "storagegateway.us-east-1.amazonaws.com"
        << "storagegateway.us-west-1.amazonaws.com"
        << "storagegateway.us-west-2.amazonaws.com"
        << "sts.amazonaws.com"
        << "sts.us-gov-west-1.amazonaws.com"
        << "support.us-east-1.amazonaws.com"
        << "swf.ap-northeast-1.amazonaws.com"
        << "swf.ap-southeast-1.amazonaws.com"
        << "swf.ap-southeast-2.amazonaws.com"
        << "swf.eu-west-1.amazonaws.com"
        << "swf.sa-east-1.amazonaws.com"
        << "swf.us-east-1.amazonaws.com"
        << "swf.us-gov-west-1.amazonaws.com"
        << "swf.us-west-1.amazonaws.com"
        << "swf.us-west-2.amazonaws.com";

    // sed -nre 's/.*<RegionName>(.*)<.*/<< "\1"/p' ../qrc/endpoints.xml | sort -u
    QList<QByteArray> regions;
    regions
        << "ap-northeast-1"
        << "ap-southeast-1"
        << "ap-southeast-2"
        << "eu-west-1"
        << "sa-east-1"
        << "us-east-1"
        << "us-gov-west-1"
        << "us-west-1"
        << "us-west-2";

    // sed -nre 's/.*<ServiceName>(.*)<.*/<< "\1"/p' ../qrc/endpoints.xml | sort -u
    QList<QByteArray> services;
    services
        << "autoscaling"
        << "cloudformation"
        << "cloudfront"
        << "cloudsearch"
        << "datapipeline"
        << "directconnect"
        << "dynamodb"
        << "ec2"
        << "elasticache"
        << "elasticbeanstalk"
        << "elasticloadbalancing"
        << "elasticmapreduce"
        << "elastictranscoder"
        << "email"
        << "glacier"
        << "iam"
        << "importexport"
        << "monitoring"
        << "opsworks"
        << "rds"
        << "redshift"
        << "route53"
        << "s3"
        << "sdb"
        << "sns"
        << "sqs"
        << "storagegateway"
        << "sts"
        << "support"
        << "swf";

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

    QBENCHMARK {
        AwsEndpointPrivate::loadEndpointData();
    }
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
