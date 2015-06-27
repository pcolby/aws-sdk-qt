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

#include "awsabstractresponse.h"
#include "awsabstractresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsAbstractResponse object.
 *
 * @param parent       This object's parent.
 */
AwsAbstractResponse::AwsAbstractResponse(QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractResponsePrivate(this))
{

}

AwsAbstractResponse::AwsAbstractResponse(AwsAbstractResponsePrivate * const d,
                                         QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

AwsAbstractResponse::~AwsAbstractResponse()
{
    delete d_ptr;
}

QString AwsAbstractResponse::errorString() const
{
    Q_D(const AwsAbstractResponse);
    if (networkError() != QNetworkReply::NoError) {
        return d->reply->errorString();
    } else if (xmlParseError() != QXmlStreamReader::NoError) {
        return xmlParseErrorString();
    } else {
        return QString();
    }
}

/// @todo Include note re cyclic dependencies if calling (virtual) isValid.
bool AwsAbstractResponse::hasError() const
{
    Q_D(const AwsAbstractResponse);
    return (((d->reply) && (d->reply->error() != QNetworkReply::NoError)) ||
            (d->xmlError != QXmlStreamReader::NoError));
}

/// @todo Include note re cyclic dependencies if calling (virtual) hasError.
bool AwsAbstractResponse::isValid() const
{
    Q_D(const AwsAbstractResponse);
    return (((!d->reply) || (d->reply->error() == QNetworkReply::NoError)) &&
            (d->xmlError == QXmlStreamReader::NoError));
}

QNetworkReply::NetworkError AwsAbstractResponse::networkError() const
{
    Q_D(const AwsAbstractResponse);
    return (d->reply) ? d->reply->error() : QNetworkReply::NoError;
}

QXmlStreamReader::Error AwsAbstractResponse::xmlParseError() const
{
    Q_D(const AwsAbstractResponse);
    return d->xmlError;
}

QString AwsAbstractResponse::xmlParseErrorString() const
{
    Q_D(const AwsAbstractResponse);
    return d->xmlErrorString;
}

QVariantMap AwsAbstractResponse::toVariant(
    QXmlStreamReader &xml, const QString &prefix, const int maxDepth)
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

/// @todo Document bool AwsAbstractResponse::isValid() const

/// @todo Document bool AwsAbstractResponse::parse(QNetworkReply * const reply)

bool AwsAbstractResponse::isSuccess(QNetworkReply * const reply) const
{
    return ((reply->error() == QNetworkReply::NoError) &&
            ((reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() / 100) == 2));
}

void AwsAbstractResponse::setReply(QNetworkReply * const reply)
{
    Q_D(AwsAbstractResponse);
    connect(reply, SIGNAL(finished()), this, SLOT(replyFinished()));
    d->reply = reply;
}

void AwsAbstractResponse::setXmlError(const QXmlStreamReader &xml)
{
    Q_D(AwsAbstractResponse);
    d->xmlError = xml.error();
    d->xmlErrorString = xml.errorString();
}

void AwsAbstractResponse::parse(QNetworkReply * const reply)
{
    if (reply->error() != QNetworkReply::NoError) {
        qWarning() << reply->errorString();
    } else if (isSuccess(reply)) {
        parseSuccess(*reply);
    } else {
        parseFailure(*reply);
    }
    emit finished();
}

void AwsAbstractResponse::replyFinished()
{
    QNetworkReply * const reply = qobject_cast<QNetworkReply *>(sender());
    Q_ASSERT(reply);
    if (reply) {
        parse(reply);
    }
}

/**
 * @internal
 *
 * @class  AwsAbstractResponsePrivate
 *
 * @brief  Private implementation for AwsAbstractResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractResponse instance.
 */
AwsAbstractResponsePrivate::AwsAbstractResponsePrivate(AwsAbstractResponse * const q)
    : reply(NULL), xmlError(QXmlStreamReader::NoError), q_ptr(q)
{

}

/**
 * @internal
 *
 * @brief  AwsAbstractResponsePrivate destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractResponsePrivate::~AwsAbstractResponsePrivate()
{

}

QTAWS_END_NAMESPACE
