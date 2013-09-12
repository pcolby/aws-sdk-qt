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
        } else if (xml.name() == QLatin1String("Services")){
            //parseServices(xml);
            xml.skipCurrentElement();
        } else {
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

QVariantMap AwsEndpointPrivate::toVariant(QXmlStreamReader &xml, const QString &prefix,
                                          const int maxDepth)
{
    if (maxDepth < 0) {
        qWarning() << QObject::tr("max depth exceeded");
        return QVariantMap();
    }

    if (xml.hasError()) {
        qWarning() << xml.errorString();
        return QVariantMap();
    }

    if (xml.tokenType() == QXmlStreamReader::NoToken)
        xml.readNext();

    if ((xml.tokenType() != QXmlStreamReader::StartDocument) &&
        (xml.tokenType() != QXmlStreamReader::StartElement)) {
        qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                      .arg(xml.tokenString()).arg(xml.tokenType());
        return QVariantMap();
    }

    QVariantMap map;
    if (xml.tokenType() == QXmlStreamReader::StartDocument) {
        map.insert(prefix + QLatin1String("DocumentEncoding"), xml.documentEncoding().toString());
        map.insert(prefix + QLatin1String("DocumentVersion"), xml.documentVersion().toString());
        map.insert(prefix + QLatin1String("StandaloneDocument"), xml.isStandaloneDocument());
    } else {
        if (!xml.namespaceUri().isEmpty())
            map.insert(prefix + QLatin1String("NamespaceUri"), xml.namespaceUri().toString());
        foreach (const QXmlStreamAttribute &attribute, xml.attributes()) {
            QVariantMap attributeMap;
            attributeMap.insert(QLatin1String("Value"), attribute.value().toString());
            if (!attribute.namespaceUri().isEmpty())
                attributeMap.insert(QLatin1String("NamespaceUri"), attribute.namespaceUri().toString());
            if (!attribute.prefix().isEmpty())
                attributeMap.insert(QLatin1String("Prefix"), attribute.prefix().toString());
            attributeMap.insert(QLatin1String("QualifiedName"), attribute.qualifiedName().toString());
            map.insertMulti(prefix + attribute.name().toString(), attributeMap);
        }
    }

    for (xml.readNext(); (!xml.atEnd()) && (xml.tokenType() != QXmlStreamReader::EndElement)
          && (xml.tokenType() != QXmlStreamReader::EndDocument); xml.readNext()) {
        switch (xml.tokenType()) {
        case QXmlStreamReader::Characters:
        case QXmlStreamReader::Comment:
        case QXmlStreamReader::DTD:
        case QXmlStreamReader::EntityReference:
            map.insertMulti(prefix + xml.tokenString(), xml.text().toString());
            break;
        case QXmlStreamReader::ProcessingInstruction:
            map.insertMulti(prefix + xml.processingInstructionTarget().toString(),
                            xml.processingInstructionData().toString());
            break;
        case QXmlStreamReader::StartElement:
            map.insertMulti(xml.name().toString(), toVariant(xml, prefix, maxDepth-1));
            break;
        default:
            qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                          .arg(xml.tokenString()).arg(xml.tokenType());
        }
    }
    return map;
}

int AwsEndpointPrivate::parseRegion(QXmlStreamReader &xml)
{
    QString regionName;
    const QStringRef name = xml.name();
    for (xml.readNextStartElement(); xml.name() != name; xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Name")) {
            regionName = xml.readElementText();
        } else if (xml.name() == QLatin1String("Endpoint")) {
            RegionEndpointInfo endpoint;
            QString serviceName;
            for (xml.readNextStartElement(); xml.name() != name; xml.readNextStartElement()) {
                if (xml.name() == QLatin1String("ServiceName")) {
                    serviceName = xml.readElementText();
                } else if (xml.name() == QLatin1String("Http")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports &= AwsEndpoint::HTTP;
                    }
                } else if (xml.name() == QLatin1String("Https")) {
                    if (xml.readElementText() == QLatin1String("true")) {
                        endpoint.transports &= AwsEndpoint::HTTPS;
                    }
                } else if (xml.name() == QLatin1String("Hostname")) {
                    endpoint.hostName = xml.readElementText();
                }
            }
            regions[regionName].services[serviceName] = endpoint;
        } else {
            qDebug() << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    return 0;
}

int AwsEndpointPrivate::parseRegions(QXmlStreamReader &xml)
{
    const QStringRef name = xml.name();
    for (xml.readNextStartElement(); xml.name() != name; xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Region")) {
            parseRegion(xml);
        } else {
            qDebug() << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    return 0;
}

int AwsEndpointPrivate::parseService(QXmlStreamReader &xml)
{
    Q_UNUSED(xml);
    return 0;
}

int AwsEndpointPrivate::parseServices(QXmlStreamReader &xml)
{
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Service")) {
            parseService(xml);
        } else {
            //qDebug() << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }
    return 0;
}

QTAWS_END_NAMESPACE
