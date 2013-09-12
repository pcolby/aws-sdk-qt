#include "awsendpoint.h"
#include "awsendpoint_p.h"

#include <QDebug>
#include <QFile>

#include <QDir>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsEndpoint
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsSignatureV4 object.
 *
 * @todo
 */
AwsEndpoint::AwsEndpoint(const QByteArray &hostName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_UNUSED(hostName)
}

AwsEndpoint::AwsEndpoint(const QString &hostName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_UNUSED(hostName)
}

AwsEndpoint::AwsEndpoint(const QString &regionName, const QString &serviceName)
    : d_ptr(new AwsEndpointPrivate(this))
{
    Q_UNUSED(regionName)
    Q_UNUSED(serviceName)
}

QUrl AwsEndpoint::getEndpoint(const QString &regionName, const QString &serviceName,
                              const Transports transport)
{
    Q_UNUSED(regionName)
    Q_UNUSED(serviceName)
    Q_UNUSED(transport)
    Q_ASSERT_X(false, "AwsEndpoint::getEndpoint", "not implemented");
    return QUrl();
}

QString AwsEndpoint::hostName() const
{
    Q_D(const AwsEndpoint);
    return d->hostName;
}

bool AwsEndpoint::isSupported(const QString &serviceName, Transports transport) const
{
    return supportedServices(transport).contains(serviceName);
}

bool AwsEndpoint::isValid() const
{
    Q_ASSERT_X(false, "AwsEndpoint::isValid", "not implemented");
    return false;
}

QString AwsEndpoint::regionName() const
{
    Q_D(const AwsEndpoint);
    return d->regionName;
}

QString AwsEndpoint::serviceName() const
{
    Q_D(const AwsEndpoint);
    return d->serviceName;
}

QStringList AwsEndpoint::supportedRegions(const QString &serviceName, const Transports transport)
{
    Q_UNUSED(serviceName);
    Q_UNUSED(transport);
    Q_ASSERT_X(false, "AwsEndpoint::supportedRegions", "not implemented");
    return QStringList();
}

QStringList AwsEndpoint::supportedServices(const QString &regionName, const Transports transport)
{
    Q_UNUSED(regionName);
    Q_UNUSED(transport);
    Q_ASSERT_X(false, "AwsEndpoint::supportedServices", "not implemented");
    return QStringList();
}

QStringList AwsEndpoint::supportedServices(const Transports transport) const
{
    Q_UNUSED(transport);
    Q_ASSERT_X(false, "AwsEndpoint::supportedServices", "not implemented");
    return QStringList();
}

/**
 * @class  AwsEndpointPrivate
 *
 * @brief  Private implementation for AwsEndpoint.
 */

QHash<QString, AwsEndpointPrivate::RegionInfo> AwsEndpointPrivate::regions;
QHash<QString, AwsEndpointPrivate::ServiceInfo> AwsEndpointPrivate::services;

QMutex AwsEndpointPrivate::mutex;

AwsEndpointPrivate::AwsEndpointPrivate(AwsEndpoint * const q)
    : q_ptr(q)
{

}

bool AwsEndpointPrivate::loadEndpointData()
{
    mutex.lock();

    // Check for pre-init.

    // Open the data file.
    QFile file(QLatin1String(":/aws/endpoints.xml"));
    if (!file.open(QIODevice::ReadOnly)) {
        qWarning() << file.errorString();
    }

    QXmlStreamReader xml(&file);
    //QVariantMap map = toVariant(xml);

    //foreach (const QVariant &variant, map.values("Regions")) {

    //}

    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Regions")) {
            parseRegions(xml);
        } else if (xml.name() == QLatin1String("Services")) {
            parseServices(xml);
        } else if (xml.name() != QLatin1String("XML")) {
            qDebug() << "ingoring " << xml.name();
        }
    }
    if (xml.hasError()) {
        qWarning() << xml.errorString();
    }

    Q_ASSERT_X(false, "AwsEndpointPrivate::loadEndpointData", "not implemented");

    mutex.unlock();
    return !xml.hasError();
}

int AwsEndpointPrivate::parseRegion(QXmlStreamReader &xml)
{
    QString regionName;
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Name")) {
            regionName = xml.readElementText();
        } else if (xml.name() == QLatin1String("Endpoint")) {
            Q_ASSERT(!regionName.isEmpty());
            RegionEndpointInfo endpoint;
            QString serviceName;
            while ((!xml.atEnd()) && (xml.readNextStartElement())) {
                if (xml.name() == QLatin1String("ServiceName")) {
                    serviceName = xml.readElementText();
                } else if (xml.name() == QLatin1String("Http")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports |= AwsEndpoint::HTTP;
                    }
                } else if (xml.name() == QLatin1String("Https")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports |= AwsEndpoint::HTTPS;
                    }
                } else if (xml.name() == QLatin1String("Hostname")) {
                    endpoint.hostName = xml.readElementText();
                } else {
                    qDebug() << Q_FUNC_INFO << "ingoring " << xml.name();
                    xml.skipCurrentElement();
                }
            }
            Q_ASSERT(!serviceName.isEmpty());

            /// @todo  Make this string a constant for performance reasons.
            if (serviceName == QLatin1String("email")) {
                endpoint.transports |= AwsEndpoint::SMTP;
            }

            /// @todo  Add to hostnames hash too.
            regions[regionName].services[serviceName] = endpoint;
            qDebug() << regionName << serviceName << (int)endpoint.transports << endpoint.hostName;
        } else {
            qDebug() << Q_FUNC_INFO << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    return 0; /// @todo  Return something more meaningful.
}

int AwsEndpointPrivate::parseRegions(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Region")) {
            parseRegion(xml);
        } else {
            qDebug() << Q_FUNC_INFO << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    return 0;
}

int AwsEndpointPrivate::parseService(QXmlStreamReader &xml)
{
    QString serviceName;
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Name")) {
            serviceName = xml.readElementText();
        } else if (xml.name() == QLatin1String("FullName")) {
            Q_ASSERT(!serviceName.isEmpty());
            services[serviceName].fullName = xml.readElementText();
        } else if (xml.name() == QLatin1String("RegionName")) {
            Q_ASSERT(!serviceName.isEmpty());
            const QString &regionName = xml.readElementText();
            services[serviceName].regionNames.append(regionName);
            //qDebug() << serviceName << services[serviceName].fullName << regionName;
        } else {
            qDebug() << Q_FUNC_INFO << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    qDebug() << xml.name() << xml.tokenString();
    return 0;
}

int AwsEndpointPrivate::parseServices(QXmlStreamReader &xml)
{
    while ((!xml.atEnd()) && (xml.readNextStartElement())) {
        if (xml.name() == QLatin1String("Service")) {
            parseService(xml);
        } else {
            qDebug() << Q_FUNC_INFO << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    return 0;
}

QTAWS_END_NAMESPACE
