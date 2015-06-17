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
    if ((xml.readNextStartElement()) &&
        (xml.name() == QLatin1String("ErrorResponse")) &&
        (d->parseErrorResponse(&xml))) {
        return true;
    }

    // If the above failed, but we have no stream reader errors, than we must
    // have the start of an XML document, that does not begin with an
    // ErrorResponse element.  So include the response document verbatim.
    if (!xml.hasError()) {
        SqsErrorResponse::Error error;
        error.code = OtherError;
        error.message = tr("Unrecognised SQS response element: %s").arg(xml.name().toString());
        error.rawCode = tr("UnknownResponseElement");
        error.type = OtherType;
      //error.detail = xmlToVariant(xml);
        d->errors.append(error);
    }

    // The stream reader encounted a parse error, add it to the errors list.
    if (xml.hasError()) {
        QVariantMap detail;
        detail[QLatin1String("characterOffset")] = xml.characterOffset();
        detail[QLatin1String("columnNumber")] = xml.columnNumber();
        detail[QLatin1String("lineNumber")] = xml.lineNumber();
        SqsErrorResponse::Error error;
        error.code = OtherError;
        error.message = xml.errorString();
        error.rawCode = tr("XmlParseError");
        error.type = OtherType;
        error.detail = detail;
        d->errors.append(error);
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

QVariant SqsErrorResponse::detail() const
{
    Q_D(const SqsErrorResponse);
    return (d->errors.isEmpty()) ? QVariant() : d->errors.first().detail;
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
    return (d->errors.isEmpty()) ? OtherType : d->errors.first().type;
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
                    error.type = typeFromString(error.rawType);
                } else if (xml->name() == QLatin1String("Code")) {
                    error.rawCode = xml->readElementText();
                    error.code = codeFromString(error.rawCode);
                } else if (xml->name() == QLatin1String("Message")) {
                    error.message = xml->readElementText();
                } else if (xml->name() == QLatin1String("Detail")) {
                    /// @todo  The WSDL allows unrestricted complex types; can
                    ///        we report the embedded complex element verbatim?
                    error.detail = xml->readElementText(QXmlStreamReader::IncludeChildElements);
                  //error.detail = xmlToVariant(xml); ///< https://gist.github.com/pcolby/6558910
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

SqsErrorResponse::ErrorCode SqsErrorResponsePrivate::codeFromString(const QString &code)
{
    #define IfStringReturnErrorResponse(str) \
        if (code == QLatin1String(#str)) return SqsErrorResponse::str
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
    return SqsErrorResponse::OtherError;
}

SqsErrorResponse::ErrorType SqsErrorResponsePrivate::typeFromString(const QString &type)
{
    #define IfStringReturnErrorType(str) \
        if (type == QLatin1String(#str)) return SqsErrorResponse::str##Type
    IfStringReturnErrorType(Receiver);
    IfStringReturnErrorType(Sender);
    #undef IfStringReturnErrorType
    qWarning() << Q_FUNC_INFO << "unknown SQS error type" << type;
    return SqsErrorResponse::OtherType;
}

QTAWS_END_NAMESPACE
