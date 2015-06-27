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

#include "sqsresponse.h"
#include "sqsresponse_p.h"
#include "sqserror.h"

#include <QDebug>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param parent       This object's parent.
 */
SqsResponse::SqsResponse(QObject * const parent)
    : AwsAbstractResponse(new SqsResponsePrivate(this), parent)
{

}

SqsResponse::SqsResponse(SqsResponsePrivate * const d, QObject * const parent)
    : AwsAbstractResponse(d, parent)
{

}

QString SqsResponse::errorString() const
{
    Q_D(const SqsResponse);
    return (d->errors.empty()) ? AwsAbstractResponse::errorString() : d->errors.first().message();
}

bool SqsResponse::hasError() const
{
    return ((!serviceErrors().isEmpty()) || (AwsAbstractResponse::hasError()));
}

bool SqsResponse::isValid() const
{
    return ((serviceErrors().isEmpty()) && (AwsAbstractResponse::isValid()));
}

QString SqsResponse::requestId() const
{
    Q_D(const SqsResponse);
    return d->requestId;
}

SqsErrorList SqsResponse::serviceErrors() const
{
    Q_D(const SqsResponse);
    return d->errors;
}

void SqsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);
}

/**
 * @internal
 *
 * @class  SqsResponsePrivate
 *
 * @brief  Private implementation for SqsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsResponse instance.
 */
SqsResponsePrivate::SqsResponsePrivate(SqsResponse * const q)
    : AwsAbstractResponsePrivate(q)
{

}

void SqsResponsePrivate::parseErrorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ErrorResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Error")) {
            errors.append(SqsError(xml));
        } else if (xml.name() == QLatin1String("RequestId")) {
            requestId = xml.readElementText();
        } else {
           qWarning() << "ignoring" << xml.name();
           xml.skipCurrentElement();
        }
    }
}

void SqsResponsePrivate::parseResponseMetadata(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResponseMetadata"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("RequestId")) {
            requestId = xml.readElementText();
        } else {
           qWarning() << "ignoring" << xml.name();
           xml.skipCurrentElement();
        }
    }
}

QTAWS_END_NAMESPACE
