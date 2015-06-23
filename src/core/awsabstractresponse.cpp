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

AwsAbstractResponse::~AwsAbstractResponse()
{
    delete d_ptr;
}

bool AwsAbstractResponse::isErrorResponse() const
{
    return false;
}

/// @todo Document bool AwsAbstractResponse::isValid() const

/// @todo Document bool AwsAbstractResponse::parse(QNetworkReply * const reply)

void AwsAbstractResponse::setReply(QNetworkReply * const reply)
{
    Q_D(AwsAbstractResponse);
    connect(reply, SIGNAL(finished(QNetworkReply*)), this, SLOT(parse(QNetworkReply*)));
    d->reply = reply;
}

bool AwsAbstractResponse::parse(QNetworkReply * const reply)
{
    /// @todo if (reply->error() == QNetworkReply::NoError)
    return ((reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() / 100) == 2)
            ? parseSuccess(*reply) : parseError(*reply);
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
 *
 * @todo   Add operation parameter instead of defaulting to Get?
 */
AwsAbstractResponsePrivate::AwsAbstractResponsePrivate(AwsAbstractResponse * const q)
    : q_ptr(q)
{

}

AwsAbstractResponsePrivate::~AwsAbstractResponsePrivate()
{

}

QVariantMap AwsAbstractResponsePrivate::toVariant(
    QXmlStreamReader &xml, const QString &prefix, const int maxDepth) const
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

QTAWS_END_NAMESPACE
