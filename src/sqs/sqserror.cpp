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

#include "sqserror.h"
#include "sqserror_p.h"

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
SqsError::SqsError(QObject * const parent)
    : SqsResponse(parent), d_ptr(new SqsErrorPrivate(this))
{

}

SqsError::~SqsError()
{
    delete d_ptr;
}

bool SqsError::isErrorResponse() const
{
    return true; // Yes, SqsError represents an error response ;)
}

bool SqsError::isValid() const
{
    return !errors().isEmpty();
}

SqsError::ErrorList SqsError::errors() const
{
    Q_D(const SqsError);
    return d->errors;
}

SqsError::ErrorCode SqsError::code() const
{
    Q_D(const SqsError);
    return (d->errors.isEmpty()) ? OtherError : d->errors.first().code;
}

QVariant SqsError::detail() const
{
    Q_D(const SqsError);
    return (d->errors.isEmpty()) ? QVariant() : d->errors.first().detail;
}

QString SqsError::message() const
{
    Q_D(const SqsError);
    return (d->errors.isEmpty()) ? QString() : d->errors.first().message;
}

// if !isValid then result may be any of the ErrorTypes.
SqsError::ErrorType SqsError::type() const
{
    Q_D(const SqsError);
    return (d->errors.isEmpty()) ? OtherType : d->errors.first().type;
}

bool SqsError::parseSuccess(QIODevice &response)
{
    Q_D(SqsError);
    QXmlStreamReader xml(&response);
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << Q_FUNC_INFO << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }

    // The stream reader encounted a parse error, add it to the errors list.
    if (xml.hasError()) {
        QVariantMap detail;
        detail[QLatin1String("characterOffset")] = xml.characterOffset();
        detail[QLatin1String("columnNumber")] = xml.columnNumber();
        detail[QLatin1String("lineNumber")] = xml.lineNumber();
        SqsError::Error error;
        error.code = OtherError;
        error.message = xml.errorString();
        error.rawCode = tr("XmlParseError");
        error.type = OtherType;
        error.detail = detail;
        d->errors.append(error);
    }
    return false;
}

/**
 * @internal
 *
 * @class  SqsErrorPrivate
 *
 * @brief  Private implementation for SqsError.
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
SqsErrorPrivate::SqsErrorPrivate(SqsError * const q)
    : SqsResponsePrivate(q), q_ptr(q)
{

}

SqsErrorPrivate::~SqsErrorPrivate()
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
 * @note Unlike most other SQS responses, the SQS ErrorResponse does not wrap
 *       the RequestId element in a ResponseMetadata element.
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsErrorPrivate::parseErrorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ErrorResponse"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Error")) {
            SqsError::Error error;
            while (xml.readNextStartElement()) {
                if (xml.name() == QLatin1String("Type")) {
                    error.rawType = xml.readElementText();
                    error.type = typeFromString(error.rawType);
                } else if (xml.name() == QLatin1String("Code")) {
                    error.rawCode = xml.readElementText();
                    error.code = codeFromString(error.rawCode);
                } else if (xml.name() == QLatin1String("Message")) {
                    error.message = xml.readElementText();
                } else if (xml.name() == QLatin1String("Detail")) {
                    /// @todo  The WSDL allows unrestricted complex types; can
                    ///        we report the embedded complex element verbatim?
                    error.detail = toVariant(xml);
                } else {
                   qWarning() << Q_FUNC_INFO << "ignoring" << xml.name();
                   xml.skipCurrentElement();
                }
            }
            errors.append(error);
        } else if (xml.name() == QLatin1String("RequestId")) {
            requestId = xml.readElementText();
        } else {
           qWarning() << Q_FUNC_INFO << "ignoring" << xml.name();
           xml.skipCurrentElement();
        }
    }
}

SqsError::ErrorCode SqsErrorPrivate::codeFromString(const QString &code)
{
    #define IfStringReturnErrorResponse(str) \
        if (code == QLatin1String(#str)) return SqsError::str
    IfStringReturnErrorResponse(AccessDenied);
    IfStringReturnErrorResponse(IncompleteSignature);
    IfStringReturnErrorResponse(InternalFailure);
    IfStringReturnErrorResponse(InvalidAction);
    IfStringReturnErrorResponse(InvalidClientTokenId);
    IfStringReturnErrorResponse(InvalidParameterCombination);
    IfStringReturnErrorResponse(InvalidParameterValue);
    IfStringReturnErrorResponse(InvalidQueryParameter);
    IfStringReturnErrorResponse(MalformedQueryString);
    IfStringReturnErrorResponse(MissingAction);
    IfStringReturnErrorResponse(MissingAuthenticationToken);
    IfStringReturnErrorResponse(MissingParameter);
    IfStringReturnErrorResponse(OptInRequired);
    IfStringReturnErrorResponse(RequestExpired);
    IfStringReturnErrorResponse(ServiceUnavailable);
    IfStringReturnErrorResponse(Throttling);
    IfStringReturnErrorResponse(ValidationError);
    #undef IfStringReturnErrorResponse
    qWarning() << Q_FUNC_INFO << "unknown SQS error code" << code;
    return SqsError::OtherError;
}

SqsError::ErrorType SqsErrorPrivate::typeFromString(const QString &type)
{
    #define IfStringReturnErrorType(str) \
        if (type == QLatin1String(#str)) return SqsError::str##Type
    IfStringReturnErrorType(Receiver);
    IfStringReturnErrorType(Sender);
    #undef IfStringReturnErrorType
    qWarning() << Q_FUNC_INFO << "unknown SQS error type" << type;
    return SqsError::OtherType;
}

QTAWS_END_NAMESPACE
