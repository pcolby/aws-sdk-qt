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

QVariantMap AwsEndpointPrivate::toVariant(QXmlStreamReader &xml)
{
    //if (maxDepth)
    //xml.raiseError(...);

    if (xml.tokenType() == QXmlStreamReader::NoToken)
        xml.readNext();

    if ((xml.tokenType() != QXmlStreamReader::StartDocument) &&
        (xml.tokenType() != QXmlStreamReader::StartElement)) {
        qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                      .arg(xml.tokenString()).arg(xml.tokenType());
        return QVariantMap();
    }

    QVariantMap map;
    if (xml.tokenType() != QXmlStreamReader::StartDocument) {
        map.insert(QLatin1String(".documentEncoding"), xml.documentEncoding().toString());
        map.insert(QLatin1String(".documentVersion"), xml.documentVersion().toString());
        map.insert(QLatin1String(".isStandaloneDocument"), xml.isStandaloneDocument());
    } else { // QXmlStreamReader::StartElement

    }


    //case QXmlStreamReader::EndDocument:
        //return QVariant();
    case QXmlStreamReader::StartElement: {
        // The reader reports the start of an element with namespaceUri() and name().
        // Empty elements are also reported as StartElement, followed directly by EndElement.
        // The convenience function readElementText() can be called to concatenate all content
        // until the corresponding EndElement. Attributes are reported in attributes(),
        // namespace declarations in namespaceDeclarations().
        QVariantMap map;
        map.insert(QLatin1String(".namespaceUri"), xml.namespaceUri().toString());
        for (xml.readNext(); (!xml.atEnd()) && (!xml.TokenType == QXmlStreamReader::EndElement); xml.readNext()) {
            switch (xml.tokenType()) {
            case QXmlStreamReader::Characters:
                map.insertMulti(".text", xml.text());
                break;
            case QXmlStreamReader::Comment:
                map.insertMulti(".comment", xml.text());
                break;
            case QXmlStreamReader::DTD:
                map.insertMulti(".dtd", xml.text());
                break;
            case QXmlStreamReader::EntityReference:
                map.insertMulti(".text", xml.text());
                break;
            case QXmlStreamReader::ProcessingInstruction:
                map.insertMulti(QLatin1Char('.') + xml.processingInstructionTarget().toString(),
                                xml.processingInstructionData().toString());
                break;
            case QXmlStreamReader::StartElement:
                map.insertMulti(xml.name().toString(), toVariant(map));
                break;
            default:
                qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                              .arg(xml.tokenString()).arg(xml.tokenType());
        }
        return map;
    }
    case QXmlStreamReader::EndElement: // The reader reports the end of an element with namespaceUri() and name().
    case QXmlStreamReader::Characters:            // The reader reports characters in text(). If the characters are all white-space, isWhitespace() returns true. If the characters stem from a CDATA section, isCDATA() returns true.
    case QXmlStreamReader::Comment:               // The reader reports a comment in text().
    case QXmlStreamReader::DTD:                   // The reader reports a DTD in text(), notation declarations in ...
    case QXmlStreamReader::EntityReference:       // The reader reports an entity reference that could not be resolved.
    case QXmlStreamReader::ProcessingInstruction: // The reader reports a processing instruction in ...
        break;
    }

}

int AwsEndpointPrivate::parseRegion(QXmlStreamReader &xml)
{
    QString serviceName;
    const QStringRef name = xml.name();
    for (xml.readNextStartElement(); xml.name() != name; xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Name")) {
            serviceName = xml.readElementText();
            qDebug() << "serviceName:" << serviceName;
        } else if (xml.name() == QLatin1String("Endpoint")) {

        } else {
            qDebug() << "ingoring " << xml.name();
            xml.skipCurrentElement();
        }
    }

//    QMap<QString,
//    qDebug() << xml.name();
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
