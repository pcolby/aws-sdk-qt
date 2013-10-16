/*
    Copyright 2013 Paul Colby

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

#include "../../src/core/awsendpoint.h"
#include "../../src/core/awsendpoint_p.h"

#include "awsendpointtestdata.h"

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
            QTest::newRow(host.key().toUtf8()) << host.key() << (AwsEndpoint::Transport)transport
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
    QTest::addColumn<AwsEndpoint::Transport>("transport");
    QTest::addColumn<bool>("supported");

    QTest::newRow("null")
        << QString()
        << QString()
        << AwsEndpoint::AnyTransport
        << false;

    QTest::newRow("cloudformation:us-east-1:AnyTransport")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::AnyTransport
        << true;

    QTest::newRow("cloudformation:us-east-1:HTTP")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::HTTP
        << false;

    QTest::newRow("cloudformation:us-east-1:HTTPS")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("cloudformation")
        << AwsEndpoint::HTTPS
        << true;

    QTest::newRow("elasticloadbalancing:us-east-1:AnyTransport")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("elasticloadbalancing")
        << AwsEndpoint::AnyTransport
        << true;

    QTest::newRow("elasticloadbalancing:us-east-1:HTTP")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("elasticloadbalancing")
        << AwsEndpoint::HTTP
        << true;

    QTest::newRow("elasticloadbalancing:us-east-1:HTTPS")
        << QString::fromLatin1("us-east-1")
        << QString::fromLatin1("elasticloadbalancing")
        << AwsEndpoint::HTTPS
        << true;
}

void TestAwsEndpoint::isSupported_static()
{
    QFETCH(QString, regionName);
    QFETCH(QString, serviceName);
    QFETCH(AwsEndpoint::Transport, transport);
    QFETCH(bool, supported);

    QCOMPARE(AwsEndpoint::isSupported(regionName, serviceName, transport), supported);
}

void TestAwsEndpoint::isValid_data()
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
    QTest::newRow("1")
        << QString::fromLatin1("1")
        << QString::fromLatin1("2")
        << QString::fromLatin1("")
        << false;
    QTest::newRow("2")
        << QString::fromLatin1("")
        << QString::fromLatin1("2")
        << QString::fromLatin1("3")
        << false;
    QTest::newRow("3")
        << QString::fromLatin1("1")
        << QString::fromLatin1("")
        << QString::fromLatin1("3")
        << false;
    QTest::newRow("4")
        << QString::fromLatin1("1")
        << QString::fromLatin1("2")
        << QString::fromLatin1("3")
        << true;
}

void TestAwsEndpoint::isValid()
{
    QFETCH(QString, hostName);
    QFETCH(QString, regionName);
    QFETCH(QString, serviceName);
    QFETCH(bool, isValid);

    AwsEndpoint endpoint(QLatin1String(""));
    endpoint.d_func()->hostName = hostName;
    endpoint.d_func()->regionName = regionName;
    endpoint.d_func()->serviceName = serviceName;
    QCOMPARE(endpoint.isValid(), isValid);
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

    #define NEW_ROW(service, fullName) QTest::newRow(service) << QString::fromLatin1(service) << QString::fromLatin1(fullName)

    // The 30 known (so far) AWS services.
    NEW_ROW("autoscaling", "Auto Scaling");
    NEW_ROW("cloudformation", "Amazon CloudFormation");
    NEW_ROW("cloudfront", "Amazon CloudFront");
    NEW_ROW("cloudsearch", "Amazon CloudSearch");
    NEW_ROW("datapipeline", "AWS Data Pipeline");
    NEW_ROW("directconnect", "AWS Direct Connect");
    NEW_ROW("dynamodb", "Amazon DynamoDB");
    NEW_ROW("ec2", "Amazon Elastic Compute Cloud");
    NEW_ROW("elasticache", "Amazon ElastiCache");
    NEW_ROW("elasticbeanstalk", "AWS Elastic Beanstalk");
    NEW_ROW("elasticloadbalancing", "Elastic Load Balancing");
    NEW_ROW("elasticmapreduce", "Amazon Elastic MapReduce");
    NEW_ROW("elastictranscoder", "Amazon Elastic Transcoder");
    NEW_ROW("email", "Amazon Simple Email Service");
    NEW_ROW("glacier", "Amazon Glacier");
    NEW_ROW("iam", "AWS Identity & Access Management");
    NEW_ROW("importexport", "AWS Import/Export");
    NEW_ROW("monitoring", "Amazon CloudWatch");
    NEW_ROW("opsworks", "AWS OpsWorks");
    NEW_ROW("rds", "Amazon Relational Database Service");
    NEW_ROW("redshift", "Amazon Redshift");
    NEW_ROW("route53", "Amazon Route 53");
    NEW_ROW("s3", "Amazon Simple Storage Service");
    NEW_ROW("sdb", "Amazon SimpleDB");
    NEW_ROW("sns", "Amazon Simple Notification Service");
    NEW_ROW("sqs", "Amazon Simple Queue Service");
    NEW_ROW("storagegateway", "AWS Storage Gateway");
    NEW_ROW("sts", "AWS Security Token Service");
    NEW_ROW("support", "AWS Support");
    NEW_ROW("swf", "Amazon Simple Workflow Service");

    #undef NEW_ROW
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

void TestAwsEndpoint::hostName_data()
{
    QTest::addColumn<QString>("hostName");

    foreach (const QString &hostname, AwsEndpointTestData::hostInfoMap().keys()) {
        QTest::newRow(hostname.toUtf8()) << hostname;
    }

    QTest::newRow("null")     << QString();
    QTest::newRow("empty")    << QString::fromLatin1("");
    QTest::newRow("space")    << QString::fromLatin1(" ");
    QTest::newRow("spaces")   << QString::fromLatin1("  ");
    QTest::newRow("jiberish") << QString::fromLatin1("dhfkjshdkfjhsdkfhkjsdhkfhksdjfhkjsdhfkjsdhkf");
}

void TestAwsEndpoint::hostName()
{
    QFETCH(QString, hostName);
    const AwsEndpoint endpoint(hostName);
    QCOMPARE(endpoint.hostName(), hostName);
}

void TestAwsEndpoint::regionName_data()
{
    QTest::addColumn<QString>("hostName");
    QTest::addColumn<QString>("regionName");
    QTest::newRow("null")     << QString() << QString();
    QTest::newRow("empty")    << QString::fromLatin1("") << QString();
    QTest::newRow("space")    << QString::fromLatin1(" ") << QString();
    QTest::newRow("spaces")   << QString::fromLatin1("  ") << QString();
    QTest::newRow("jiberish") << QString::fromLatin1("dhfkjshdkfjhsdkfhkjsdhkfhksdjfhkjsdhfkjsdhkf") << QString();

    #define NEW_ROW(host, region) QTest::newRow(host) << QString::fromLatin1(host) << QString::fromLatin1(region)

    // The 174 known (so far) region-specific AWS hosts.
    NEW_ROW("autoscaling.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("autoscaling.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("autoscaling.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("autoscaling.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("autoscaling.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("autoscaling.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("autoscaling.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("autoscaling.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("autoscaling.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("cloudformation.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("cloudformation.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("cloudformation.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("cloudformation.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("cloudformation.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("cloudformation.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("cloudformation.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("cloudformation.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("cloudsearch.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("cloudsearch.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("cloudsearch.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("cloudsearch.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("cloudsearch.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("datapipeline.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("directconnect.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("directconnect.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("directconnect.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("directconnect.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("directconnect.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("directconnect.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("directconnect.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("directconnect.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("dynamodb.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("dynamodb.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("dynamodb.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("dynamodb.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("dynamodb.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("dynamodb.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("dynamodb.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("dynamodb.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("dynamodb.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("ec2.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("ec2.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("ec2.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("ec2.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("ec2.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("ec2.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("ec2.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("ec2.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("ec2.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("elasticache.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("elasticache.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("elasticache.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("elasticache.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("elasticache.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("elasticache.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("elasticache.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("elasticache.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("elasticbeanstalk.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("elasticbeanstalk.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("elasticbeanstalk.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("elasticbeanstalk.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("elasticbeanstalk.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("elasticbeanstalk.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("elasticbeanstalk.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("elasticbeanstalk.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("elasticloadbalancing.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("elasticloadbalancing.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("elasticloadbalancing.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("elasticloadbalancing.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("elasticloadbalancing.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("elasticloadbalancing.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("elasticloadbalancing.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("elasticloadbalancing.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("elasticloadbalancing.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("elasticmapreduce.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("elasticmapreduce.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("elasticmapreduce.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("elasticmapreduce.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("elasticmapreduce.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("elasticmapreduce.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("elasticmapreduce.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("elasticmapreduce.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("elasticmapreduce.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("elastictranscoder.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("elastictranscoder.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("elastictranscoder.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("elastictranscoder.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("elastictranscoder.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("elastictranscoder.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("elastictranscoder.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("elastictranscoder.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("email.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("glacier.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("glacier.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("glacier.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("glacier.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("glacier.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("monitoring.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("monitoring.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("monitoring.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("monitoring.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("monitoring.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("monitoring.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("monitoring.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("monitoring.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("monitoring.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("opsworks.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("rds.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("rds.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("rds.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("rds.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("rds.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("rds.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("rds.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("rds.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("rds.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("redshift.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("redshift.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("redshift.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("redshift.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("s3-ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("s3-ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("s3-ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("s3-eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("s3-sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("s3-us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("s3-us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("s3-us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("s3.amazonaws.com", "us-east-1");
    NEW_ROW("sdb.amazonaws.com", "us-east-1");
    NEW_ROW("sdb.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("sdb.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("sdb.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("sdb.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("sdb.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("sdb.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("sdb.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("sns.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("sns.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("sns.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("sns.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("sns.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("sns.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("sns.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("sns.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("sns.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("sqs.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("sqs.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("sqs.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("sqs.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("sqs.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("sqs.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("sqs.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("sqs.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("sqs.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("storagegateway.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("storagegateway.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("storagegateway.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("storagegateway.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("storagegateway.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("storagegateway.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("storagegateway.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("storagegateway.us-west-2.amazonaws.com", "us-west-2");
    NEW_ROW("sts.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("support.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("swf.ap-northeast-1.amazonaws.com", "ap-northeast-1");
    NEW_ROW("swf.ap-southeast-1.amazonaws.com", "ap-southeast-1");
    NEW_ROW("swf.ap-southeast-2.amazonaws.com", "ap-southeast-2");
    NEW_ROW("swf.eu-west-1.amazonaws.com", "eu-west-1");
    NEW_ROW("swf.sa-east-1.amazonaws.com", "sa-east-1");
    NEW_ROW("swf.us-east-1.amazonaws.com", "us-east-1");
    NEW_ROW("swf.us-gov-west-1.amazonaws.com", "us-gov-west-1");
    NEW_ROW("swf.us-west-1.amazonaws.com", "us-west-1");
    NEW_ROW("swf.us-west-2.amazonaws.com", "us-west-2");

    // The 6 known (so far) region-agnostic AWS hosts.
    NEW_ROW("cloudfront.amazonaws.com", "us-east-1");
    NEW_ROW("iam.amazonaws.com", "us-east-1");
    NEW_ROW("iam.us-gov.amazonaws.com", "us-gov-west-1");
    NEW_ROW("importexport.amazonaws.com", "us-east-1");
    NEW_ROW("route53.amazonaws.com", "us-east-1");
    NEW_ROW("sts.amazonaws.com", "us-east-1");
    #undef NEW_ROW
}

void TestAwsEndpoint::regionName()
{
    QFETCH(QString, hostName);
    QFETCH(QString, regionName);
    const AwsEndpoint endpoint(hostName);
    QCOMPARE(endpoint.regionName(), regionName);
}

void TestAwsEndpoint::serviceName_data()
{
    QTest::addColumn<QString>("hostName");
    QTest::addColumn<QString>("serviceName");
    QTest::newRow("null")     << QString() << QString();
    QTest::newRow("empty")    << QString::fromLatin1("") << QString();
    QTest::newRow("space")    << QString::fromLatin1(" ") << QString();
    QTest::newRow("spaces")   << QString::fromLatin1("  ") << QString();
    QTest::newRow("null")     << QString() << QString();
    QTest::newRow("empty")    << QString::fromLatin1("") << QString();
    QTest::newRow("space")    << QString::fromLatin1(" ") << QString();
    QTest::newRow("spaces")   << QString::fromLatin1("  ") << QString();
    QTest::newRow("jiberish") << QString::fromLatin1("dhfkjshdkfjhsdkfhkjsdhkfhksdjfhkjsdhfkjsdhkf") << QString();

    #define NEW_ROW(host, service) QTest::newRow(host) << QString::fromLatin1(host) << QString::fromLatin1(service)

    // The 180 known (so far) AWS hosts.
    // sed -nre 's/.*<Hostname>(([^\.]+).*\.amazonaws\.com)<.*/NEW_ROW("\1", "\2");/p' ../qrc/endpoints.xml | sort -u
    NEW_ROW("autoscaling.ap-northeast-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.ap-southeast-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.ap-southeast-2.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.eu-west-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.sa-east-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.us-east-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.us-gov-west-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.us-west-1.amazonaws.com", "autoscaling");
    NEW_ROW("autoscaling.us-west-2.amazonaws.com", "autoscaling");
    NEW_ROW("cloudformation.ap-northeast-1.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.ap-southeast-1.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.ap-southeast-2.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.eu-west-1.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.sa-east-1.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.us-east-1.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.us-west-1.amazonaws.com", "cloudformation");
    NEW_ROW("cloudformation.us-west-2.amazonaws.com", "cloudformation");
    NEW_ROW("cloudfront.amazonaws.com", "cloudfront");
    NEW_ROW("cloudsearch.ap-southeast-1.amazonaws.com", "cloudsearch");
    NEW_ROW("cloudsearch.eu-west-1.amazonaws.com", "cloudsearch");
    NEW_ROW("cloudsearch.us-east-1.amazonaws.com", "cloudsearch");
    NEW_ROW("cloudsearch.us-west-1.amazonaws.com", "cloudsearch");
    NEW_ROW("cloudsearch.us-west-2.amazonaws.com", "cloudsearch");
    NEW_ROW("datapipeline.us-east-1.amazonaws.com", "datapipeline");
    NEW_ROW("directconnect.ap-northeast-1.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.ap-southeast-1.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.ap-southeast-2.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.eu-west-1.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.sa-east-1.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.us-east-1.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.us-west-1.amazonaws.com", "directconnect");
    NEW_ROW("directconnect.us-west-2.amazonaws.com", "directconnect");
    NEW_ROW("dynamodb.ap-northeast-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.ap-southeast-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.ap-southeast-2.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.eu-west-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.sa-east-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.us-east-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.us-gov-west-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.us-west-1.amazonaws.com", "dynamodb");
    NEW_ROW("dynamodb.us-west-2.amazonaws.com", "dynamodb");
    NEW_ROW("ec2.ap-northeast-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.ap-southeast-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.ap-southeast-2.amazonaws.com", "ec2");
    NEW_ROW("ec2.eu-west-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.sa-east-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.us-east-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.us-gov-west-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.us-west-1.amazonaws.com", "ec2");
    NEW_ROW("ec2.us-west-2.amazonaws.com", "ec2");
    NEW_ROW("elasticache.ap-northeast-1.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.ap-southeast-1.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.ap-southeast-2.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.eu-west-1.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.sa-east-1.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.us-east-1.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.us-west-1.amazonaws.com", "elasticache");
    NEW_ROW("elasticache.us-west-2.amazonaws.com", "elasticache");
    NEW_ROW("elasticbeanstalk.ap-northeast-1.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.ap-southeast-1.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.ap-southeast-2.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.eu-west-1.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.sa-east-1.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.us-east-1.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.us-west-1.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticbeanstalk.us-west-2.amazonaws.com", "elasticbeanstalk");
    NEW_ROW("elasticloadbalancing.ap-northeast-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.ap-southeast-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.ap-southeast-2.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.eu-west-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.sa-east-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.us-east-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.us-gov-west-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.us-west-1.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticloadbalancing.us-west-2.amazonaws.com", "elasticloadbalancing");
    NEW_ROW("elasticmapreduce.ap-northeast-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.ap-southeast-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.ap-southeast-2.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.eu-west-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.sa-east-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.us-east-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.us-gov-west-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.us-west-1.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elasticmapreduce.us-west-2.amazonaws.com", "elasticmapreduce");
    NEW_ROW("elastictranscoder.ap-northeast-1.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.ap-southeast-1.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.ap-southeast-2.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.eu-west-1.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.sa-east-1.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.us-east-1.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.us-west-1.amazonaws.com", "elastictranscoder");
    NEW_ROW("elastictranscoder.us-west-2.amazonaws.com", "elastictranscoder");
    NEW_ROW("email.us-east-1.amazonaws.com", "email");
    NEW_ROW("glacier.ap-northeast-1.amazonaws.com", "glacier");
    NEW_ROW("glacier.eu-west-1.amazonaws.com", "glacier");
    NEW_ROW("glacier.us-east-1.amazonaws.com", "glacier");
    NEW_ROW("glacier.us-west-1.amazonaws.com", "glacier");
    NEW_ROW("glacier.us-west-2.amazonaws.com", "glacier");
    NEW_ROW("iam.amazonaws.com", "iam");
    NEW_ROW("iam.us-gov.amazonaws.com", "iam");
    NEW_ROW("importexport.amazonaws.com", "importexport");
    NEW_ROW("monitoring.ap-northeast-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.ap-southeast-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.ap-southeast-2.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.eu-west-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.sa-east-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.us-east-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.us-gov-west-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.us-west-1.amazonaws.com", "monitoring");
    NEW_ROW("monitoring.us-west-2.amazonaws.com", "monitoring");
    NEW_ROW("opsworks.us-east-1.amazonaws.com", "opsworks");
    NEW_ROW("rds.ap-northeast-1.amazonaws.com", "rds");
    NEW_ROW("rds.ap-southeast-1.amazonaws.com", "rds");
    NEW_ROW("rds.ap-southeast-2.amazonaws.com", "rds");
    NEW_ROW("rds.eu-west-1.amazonaws.com", "rds");
    NEW_ROW("rds.sa-east-1.amazonaws.com", "rds");
    NEW_ROW("rds.us-east-1.amazonaws.com", "rds");
    NEW_ROW("rds.us-gov-west-1.amazonaws.com", "rds");
    NEW_ROW("rds.us-west-1.amazonaws.com", "rds");
    NEW_ROW("rds.us-west-2.amazonaws.com", "rds");
    NEW_ROW("redshift.ap-northeast-1.amazonaws.com", "redshift");
    NEW_ROW("redshift.eu-west-1.amazonaws.com", "redshift");
    NEW_ROW("redshift.us-east-1.amazonaws.com", "redshift");
    NEW_ROW("redshift.us-west-2.amazonaws.com", "redshift");
    NEW_ROW("route53.amazonaws.com", "route53");
    NEW_ROW("s3.amazonaws.com", "s3");
    NEW_ROW("s3-ap-northeast-1.amazonaws.com", "s3");
    NEW_ROW("s3-ap-southeast-1.amazonaws.com", "s3");
    NEW_ROW("s3-ap-southeast-2.amazonaws.com", "s3");
    NEW_ROW("s3-eu-west-1.amazonaws.com", "s3");
    NEW_ROW("s3-sa-east-1.amazonaws.com", "s3");
    NEW_ROW("s3-us-gov-west-1.amazonaws.com", "s3");
    NEW_ROW("s3-us-west-1.amazonaws.com", "s3");
    NEW_ROW("s3-us-west-2.amazonaws.com", "s3");
    NEW_ROW("sdb.amazonaws.com", "sdb");
    NEW_ROW("sdb.ap-northeast-1.amazonaws.com", "sdb");
    NEW_ROW("sdb.ap-southeast-1.amazonaws.com", "sdb");
    NEW_ROW("sdb.ap-southeast-2.amazonaws.com", "sdb");
    NEW_ROW("sdb.eu-west-1.amazonaws.com", "sdb");
    NEW_ROW("sdb.sa-east-1.amazonaws.com", "sdb");
    NEW_ROW("sdb.us-west-1.amazonaws.com", "sdb");
    NEW_ROW("sdb.us-west-2.amazonaws.com", "sdb");
    NEW_ROW("sns.ap-northeast-1.amazonaws.com", "sns");
    NEW_ROW("sns.ap-southeast-1.amazonaws.com", "sns");
    NEW_ROW("sns.ap-southeast-2.amazonaws.com", "sns");
    NEW_ROW("sns.eu-west-1.amazonaws.com", "sns");
    NEW_ROW("sns.sa-east-1.amazonaws.com", "sns");
    NEW_ROW("sns.us-east-1.amazonaws.com", "sns");
    NEW_ROW("sns.us-gov-west-1.amazonaws.com", "sns");
    NEW_ROW("sns.us-west-1.amazonaws.com", "sns");
    NEW_ROW("sns.us-west-2.amazonaws.com", "sns");
    NEW_ROW("sqs.ap-northeast-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.ap-southeast-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.ap-southeast-2.amazonaws.com", "sqs");
    NEW_ROW("sqs.eu-west-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.sa-east-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.us-east-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.us-gov-west-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.us-west-1.amazonaws.com", "sqs");
    NEW_ROW("sqs.us-west-2.amazonaws.com", "sqs");
    NEW_ROW("storagegateway.ap-northeast-1.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.ap-southeast-1.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.ap-southeast-2.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.eu-west-1.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.sa-east-1.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.us-east-1.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.us-west-1.amazonaws.com", "storagegateway");
    NEW_ROW("storagegateway.us-west-2.amazonaws.com", "storagegateway");
    NEW_ROW("sts.amazonaws.com", "sts");
    NEW_ROW("sts.us-gov-west-1.amazonaws.com", "sts");
    NEW_ROW("support.us-east-1.amazonaws.com", "support");
    NEW_ROW("swf.ap-northeast-1.amazonaws.com", "swf");
    NEW_ROW("swf.ap-southeast-1.amazonaws.com", "swf");
    NEW_ROW("swf.ap-southeast-2.amazonaws.com", "swf");
    NEW_ROW("swf.eu-west-1.amazonaws.com", "swf");
    NEW_ROW("swf.sa-east-1.amazonaws.com", "swf");
    NEW_ROW("swf.us-east-1.amazonaws.com", "swf");
    NEW_ROW("swf.us-gov-west-1.amazonaws.com", "swf");
    NEW_ROW("swf.us-west-1.amazonaws.com", "swf");
    NEW_ROW("swf.us-west-2.amazonaws.com", "swf");
    #undef NEW_ROW
}

void TestAwsEndpoint::serviceName()
{
    QFETCH(QString, hostName);
    QFETCH(QString, serviceName);
    const AwsEndpoint endpoint(hostName);
    QCOMPARE(endpoint.serviceName(), serviceName);
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

    const QStringList services = AwsEndpoint::supportedServices(regionName, transport);
    foreach (const QString &service, expectedServices) {
        QVERIFY2(services.contains(service), service.toLatin1());
    }
    QCOMPARE(services.size(), expectedServices.size());
}

void TestAwsEndpoint::loadEndpointData_QString()
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
}

void TestAwsEndpoint::loadEndpointData_QIODevice()
{
    // The "working" scenario is already tested by loadEndpointData_QString
    // above, so here we're just testing some failure scenarios.

    // Loading data from an un-opennable device should fail gracefully.
    QFile device;
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
