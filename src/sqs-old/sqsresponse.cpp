/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsresponse.h"
#include "sqsresponse_p.h"
#include "sqserror.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SqsOld {

/**
 * @class  SqsResponse
 *
 * @brief  Interface class for processing SQS responses
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param  parent  This object's parent.
 */
SqsResponse::SqsResponse(QObject * const parent)
    : AwsAbstractResponse(new SqsResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SqsRequestPrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
SqsResponse::SqsResponse(SqsResponsePrivate * const d, QObject * const parent)
    : AwsAbstractResponse(d, parent)
{

}

/**
 * @brief Get this response's error string.
 *
 * This override checks for SQS service errors, and if found, returns the first
 * one.  Otherwise, this override delegates to the base implementation (which
 * checks for network and XML parse errors, for example).
 *
 * Also consider using the serviceErrors function to retrieve all of the servive
 * errors (if any), not just the first one (though often SQS will only return
 * one error per response).
 *
 * @return  An error string, or a null QString if this response has no errors.
 *
 * @see  AwsAbstractResponse::errorString
 * @see  hasError
 * @see  serviceErrors
 */
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

/**
 * @brief  Get the SQS request ID, if any, included in the SQS response.
 *
 * @return SQS request ID, or a null QString if not found.
 */
QString SqsResponse::requestId() const
{
    Q_D(const SqsResponse);
    return d->requestId;
}

/**
 * @brief  Get list of SQS errors, if any, included in the SQS response.
 *
 * @return A (possinly empty) list of SQS errors found in the SQS reponse.
 *
 * @see errorString
 */
SqsErrorList SqsResponse::serviceErrors() const
{
    Q_D(const SqsResponse);
    return d->errors;
}

/**
 * @brief  Parse a failure response.
 *
 * This implementation parses SQS ErrorResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 * @code{xml}
 * <ErrorResponse>
 *   <Error>
 *     <Type>Sender</Type>
 *     <Code>AccessDenied</Code>
 *     <Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>
 *     <Detail/>
 *   </Error>
 *   <Error>
 *     ...
 *   </Error>
 *   <RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>
 * </ErrorResponse>
 * @endcode
 *
 * @param  response  Response to parse.
 *
 * @note Unlike most other SQS responses, the SQS ErrorResponse does not wrap
 *       the RequestId element in a ResponseMetadata element.
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
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

/**
 * @brief  Parse an SQS ErrorResponse element.
 *
 * This implementation parses SQS ErrorResponse elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 * @code{xml}
 * <ErrorResponse>
 *   <Error>
 *     <Type>Sender</Type>
 *     <Code>AccessDenied</Code>
 *     <Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>
 *     <Detail/>
 *   </Error>
 *   <Error>
 *     ...
 *   </Error>
 *   <RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>
 * </ErrorResponse>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @note Unlike most other SQS responses, the SQS ErrorResponse does not wrap
 *       the RequestId element in a ResponseMetadata element.
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
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

/**
 * @brief  Parse an SQS ResponseMetadata element.
 *
 * This implementation parses SQS ResponseMetadata elements, as defined by
 * http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
 * @code{xml}
 * <ResponseMetadata>
 *   <RequestId>9a285199-c8d6-47c2-bdb2-314cb47d599d</RequestId>
 * </ResponseMetadata>
 * @endcode
 *
 * @param  xml  XML stream to parse.
 *
 * @note  This function is not actually used by the SqsResponse or
 *        SqsResponsePrivate classes, but provides common functionality employed
 *        by most (if not all) derived SqsResponse classes, as the
 *        ResponseMetadata element is common to most (if not all) successful
 *        SQS responses (its simply not used in the SQS ErrorResponse element).
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
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

} // namespace SqsOld
} // namespace QtAws
