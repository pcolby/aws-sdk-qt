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
 * @class  SqsError
 *
 * @brief  Encapsulation of an Error element from an SQS ErrorResponse response.
 *
 * @see    http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */

/**
 * @brief  Constructs a new SqsError object.
 *
 * @param  xml     XML stream to parse an SQS ErrorResponse from.
 */
SqsError::SqsError(QXmlStreamReader &xml) : d_ptr(new SqsErrorPrivate(this))
{
    Q_D(SqsError);
    d->parse(xml);
}

/**
 * @internal
 *
 * @brief  Default constructor.
 *
 * Constructs an invalid SqsError object, useful only for assignment via the
 * assignemnt operator defined below.
 *
 * @note  This function exists solely for compatability with Qt's container
 *        classes, such as QList, which require "assignable data types" - ie
 *        ones that "provide a default constructor, a copy constructor, and an
 *        assignment operator".
 *
 * @see   http://doc.qt.io/qt-5/containers.html
 */
SqsError::SqsError() : d_ptr(new SqsErrorPrivate(this))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsError object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SqsErrorPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SqsError::SqsError(SqsErrorPrivate * const d) : d_ptr(d)
{

}

/**
 * @internal
 *
 * @brief  Copy constructor.
 *
 * Constructs an SqsError object by copying \a other.
 *
 * @note  This function exists solely for compatability with Qt's container
 *        classes, such as QList, which require "assignable data types" - ie
 *        ones that "provide a default constructor, a copy constructor, and an
 *        assignment operator".
 *
 * @param  other  Instance to copy.
 *
 * @see    http://doc.qt.io/qt-5/containers.html
 */
SqsError::SqsError(const SqsError &other)
    : d_ptr(new SqsErrorPrivate(other.d_func(), this))
{

}

/**
 * @internal
 *
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @note  This function exists solely for compatability with Qt's container
 *        classes, such as QList, which require "assignable data types" - ie
 *        ones that "provide a default constructor, a copy constructor, and an
 *        assignment operator".
 *
 * @param  other  Instance to copy.
 *
 * @return A reference to this object.
 *
 * @see   http://doc.qt.io/qt-5/containers.html
 */
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

/**
 * @brief SqsError destructor.
 */
SqsError::~SqsError()
{
    delete d_ptr;
}

/**
 * @brief  Get the parsed SQS error code.
 *
 * @return An SQS error code, or SqsError::OtherError if not found or not recognised.
 *
 * @see rawCode
 */
SqsError::ErrorCode SqsError::code() const
{
    Q_D(const SqsError);
    return d->code;
}

/**
 * @brief  Get the SQS error detail, if any.
 *
 * @return SQS error detail, or an empty QVariantMap if not found.
 */
QVariantMap SqsError::detail() const
{
    Q_D(const SqsError);
    return d->detail;
}

/**
 * @brief  Get the parsed SQS error message.
 *
 * @return SQS error message, or a null QString if not found.
 */
QString SqsError::message() const
{
    Q_D(const SqsError);
    return d->message;
}

/**
 * @brief  Get the raw SQS error code string.
 *
 * That may be useful if code returned SqsError::OtherError due to the error
 * code being found, but not recognisable (ie not one of the values specified
 * by the SQS service WSDL).
 *
 * @return The raw SQS error code string, or a null QString is not found.
 *
 * @see code
 */
QString SqsError::rawCode() const
{
    Q_D(const SqsError);
    return d->rawCode;
}

/**
 * @brief  Get the raw SQS error type string.
 *
 * That may be useful if type returned SqsError::OtherType due to the error
 * type being found, but not recognisable (ie not one of the values specified
 * by the SQS service WSDL).
 *
 * @return The raw SQS error tyep string, or a null QString is not found.
 *
 * @see type
 */
QString SqsError::rawType() const
{
    Q_D(const SqsError);
    return d->rawType;
}

/**
 * @brief  Get the parsed SQS error type.
 *
 * @return An SQS error type, or SqsError::OtherType if not found or not recognised.
 *
 * @see rawType
 */
SqsError::ErrorType SqsError::type() const
{
    Q_D(const SqsError);
    return d->type;
}

/**
 * @brief  Equality operator
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal
 */
bool SqsError::operator==(const SqsError &other) const
{
    return ((code() == other.code()) &&
            (detail() == other.detail()) &&
            (message() == other.message()) &&
            (type() == other.type()));
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

/**
 * @internal
 *
 * @brief Construc an SqsErrorPrivate object by copying another.
 *
 * This is a lot like a copy constructor, and exists only to support the
 * SqsError class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsError instance.
 */
SqsErrorPrivate::SqsErrorPrivate(const SqsErrorPrivate * const other, SqsError * const q)
    : code(other->code), detail(other->detail), message(other->message),
      rawCode(other->rawCode), rawType(other->rawType), type(other->type),
      q_ptr(q)
{

}

/**
 * @brief SqsErrorPrivate destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
SqsErrorPrivate::~SqsErrorPrivate()
{

}

/**
 * @brief  Parse an SQS Error element.
 *
 * This function parses Error XML elements (ie from SQS ErrorResponse elements)
 * as specified in http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 *
 * For example:
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
 * @param  xml  XML stream to parse.
 *
 * @see http://queue.amazonaws.com/doc/2012-11-05/QueueService.wsdl
 */
void SqsErrorPrivate::parse(QXmlStreamReader &xml)
{
    if ((xml.tokenType() == QXmlStreamReader::NoToken) && (!xml.readNextStartElement())) {
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

/**
 * @brief  Convert an SQS error code string to an ErrorCode enum value.
 *
 * @param  code  SQS error code.
 *
 * @return ErrorCode equivalent to \a code, or SqsError::OtherError if not recognised.
 */
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

/**
 * @brief  Convert an SQS error type string to an ErrorType enum value.
 *
 * @param  type  SQS error type.
 *
 * @return ErrorType equivalent to \a type, or SqsError::OtherType if not recognised.
 */
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
