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
#include "core/awsabstractresponse.h"

#include <QDebug>
#include <QVariantMap>
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
SqsError::SqsError(QXmlStreamReader &xml) : d_ptr(new SqsErrorPrivate(this))
{
    Q_D(SqsError);
    d->parse(xml);
}

SqsError::SqsError() : d_ptr(new SqsErrorPrivate(this))
{

}

SqsError::SqsError(SqsErrorPrivate * const d) : d_ptr(d)
{

}

SqsError::SqsError(const SqsError &other)
    : d_ptr(new SqsErrorPrivate(other.d_func(), this))
{

}

SqsError &SqsError::operator=(const SqsError &other)
{
    Q_D(SqsError);
    d->code = other.code();
    d->detail = other.detail();
    d->message = other.message();
    d->rawCode = other.rawCode();
    d->rawType = other.rawType();
    d->type = other.type();
    return *this;
}

SqsError::~SqsError()
{
    delete d_ptr;
}

SqsError::ErrorCode SqsError::code() const
{
    Q_D(const SqsError);
    return d->code;
}

QVariantMap SqsError::detail() const
{
    Q_D(const SqsError);
    return d->detail;
}

QString SqsError::message() const
{
    Q_D(const SqsError);
    return d->message;
}

QString SqsError::rawCode() const
{
    Q_D(const SqsError);
    return d->rawCode;
}

QString SqsError::rawType() const
{
    Q_D(const SqsError);
    return d->rawType;
}

SqsError::ErrorType SqsError::type() const
{
    Q_D(const SqsError);
    return d->type;
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
 * @brief  Constructs a new SqsErrorPrivate object.
 *
 * @param  q  Pointer to this object's public SqsError instance.
 */
SqsErrorPrivate::SqsErrorPrivate(SqsError * const q)
    : code(SqsError::OtherError), type(SqsError::OtherType), q_ptr(q)
{

}

SqsErrorPrivate::SqsErrorPrivate(const SqsErrorPrivate * const other, SqsError * const q)
    : code(other->code), detail(other->detail), message(other->message),
      rawCode(other->rawCode), rawType(other->rawType), type(other->type),
      q_ptr(q)
{

}

SqsErrorPrivate::~SqsErrorPrivate()
{

}

/**
 * This function parses XML elements like:
 *
 * @code{xml}
 * <Error>
 *   <Type>Sender</Type>
 *   <Code>AccessDenied</Code>
 *   <Message>Access to the resource http://sqs.us-east-1.amazonaws.com/ is denied.</Message>
 *   <Detail/>
 * </Error>
 * @endcode
 *
 * @note Unlike most other SQS responses, the SQS ErrorResponse does not wrap
 *       the RequestId element in a ResponseMetadata element.
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsErrorPrivate::parse(QXmlStreamReader &xml)
{
    if ((xml.isStartDocument()) && (!xml.readNextStartElement())) {
        return;
    }
    Q_ASSERT(xml.name() == QLatin1String("Error"));
    while (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("Type")) {
            type = typeFromString(rawType = xml.readElementText());
        } else if (xml.name() == QLatin1String("Code")) {
            code = codeFromString(rawCode = xml.readElementText());
        } else if (xml.name() == QLatin1String("Message")) {
            message = xml.readElementText();
        } else if (xml.name() == QLatin1String("Detail")) {
            detail = AwsAbstractResponse::toVariant(xml);
        } else {
           qWarning() << "ignoring" << xml.name();
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
    qWarning() << "unknown SQS error code" << code;
    return SqsError::OtherError;
}

SqsError::ErrorType SqsErrorPrivate::typeFromString(const QString &type)
{
    #define IfStringReturnErrorType(str) \
        if (type == QLatin1String(#str)) return SqsError::str##Type
    IfStringReturnErrorType(Receiver);
    IfStringReturnErrorType(Sender);
    #undef IfStringReturnErrorType
    qWarning() << "unknown SQS error type" << type;
    return SqsError::OtherType;
}

QTAWS_END_NAMESPACE
