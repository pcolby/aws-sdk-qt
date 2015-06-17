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

#include "sqserrorresponse.h"
#include "sqserrorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
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
SqsErrorResponse::SqsErrorResponse(QObject * const parent)
    : SqsResponse(parent), d_ptr(new SqsErrorResponsePrivate(this))
{

}

bool SqsErrorResponse::isErrorResponse() const
{
    return true; // Yes, SqsErrorResponse represents an error response ;)
}

bool SqsErrorResponse::isValid() const
{
    return !errors().isEmpty();
}

bool SqsErrorResponse::parse(QIODevice * const response)
{
    Q_D(SqsErrorResponse);
    QXmlStreamReader xml(response);
    if (!xml.readNextStartElement()) {
        /// @todo invalid / no data / not XML?
    } else if (xml.name() == QLatin1String("ErrorResponse")) {
        return d->parseErrorResponse(&xml);
    } else {
        /// @todo Some other exception (eg "UnknownOperationException")
    }
    return false;
}

SqsErrorResponse::ErrorList SqsErrorResponse::errors() const
{
    Q_D(const SqsErrorResponse);
    return d->errors;
}

SqsErrorResponse::ErrorCode SqsErrorResponse::code() const
{
    Q_D(const SqsErrorResponse);
    return (d->errors.isEmpty()) ? OtherError : d->errors.first().code;
}

QString SqsErrorResponse::detail() const
{
    Q_D(const SqsErrorResponse);
    return (d->errors.isEmpty()) ? QString() : d->errors.first().detail;
}

QString SqsErrorResponse::message() const
{
    Q_D(const SqsErrorResponse);
    return (d->errors.isEmpty()) ? QString() : d->errors.first().message;
}

QString SqsErrorResponse::requestId() const
{
    Q_D(const SqsErrorResponse);
    return d->requestId;
}

// if !isValid then result may be any of the ErrorTypes.
SqsErrorResponse::ErrorType SqsErrorResponse::type() const
{
    Q_D(const SqsErrorResponse);
    return (d->errors.isEmpty()) ? Receiver : d->errors.first().type;
}

/**
 * @internal
 *
 * @class  SqsErrorResponsePrivate
 *
 * @brief  Private implementation for SqsErrorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsResponse instance.
 *
 * @todo   Add operation parameter instead of defaulting to Get?
 */
SqsErrorResponsePrivate::SqsErrorResponsePrivate(SqsErrorResponse * const q)
    : SqsResponsePrivate(q), q_ptr(q)
{

}

SqsErrorResponsePrivate::~SqsErrorResponsePrivate()
{

}

/**
 * This function parses XML elements like:
 *
 * @code{xml}
 * <ErrorResponse xmlns="http://queue.amazonaws.com/doc/2012-11-05/">
 *   <Error>
 *     <Type>Sender</Type>
 *     <Code>AccessDenied</Code>
 *     <Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>
 *     <Detail/>
 *   </Error>
 *   <RequestId>214da364-de64-53c8-9a5c-ee9ed4b0d898</RequestId>
 * </ErrorResponse>
 * @endcode
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
bool SqsErrorResponsePrivate::parseErrorResponse(QXmlStreamReader * xml)
{
    Q_ASSERT(xml->name() == QLatin1String("ErrorResponse"));
    while ((!xml->atEnd()) && (xml->readNextStartElement())) {
        if (xml->name() == QLatin1String("Error")) {
            SqsErrorResponse::Error error;
            while ((!xml->atEnd()) && (xml->readNextStartElement())) {
                if (xml->name() == QLatin1String("Type")) {
                    error.rawType = xml->readElementText();
                    //error.type =
                } else if (xml->name() == QLatin1String("Code")) {
                    error.rawCode = xml->readElementText();
                    //error.code =
                } else if (xml->name() == QLatin1String("Message")) {
                    error.message = xml->readElementText();
                } else if (xml->name() == QLatin1String("Detail")) {
                    /// @todo  The WSDL allows unrestricted complex types; can
                    ///        we report the embedded complex element verbatim?
                    error.detail = xml->readElementText(QXmlStreamReader::IncludeChildElements);
                } else {
                   qDebug() << Q_FUNC_INFO << "ignoring" << xml->name();
                }
            }
            errors.append(error);
        } else if (xml->name() == QLatin1String("RequestId")) {
            requestId = xml->readElementText();
        } else {
           qDebug() << Q_FUNC_INFO << "ignoring" << xml->name();
        }
    }
    Q_Q(SqsErrorResponse);
    return q->isValid();
}

QTAWS_END_NAMESPACE
