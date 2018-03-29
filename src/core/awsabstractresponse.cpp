/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "awsabstractresponse.h"
#include "awsabstractresponse_p.h"
#include "awsabstractrequest.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Client {

/**
 * @class  AwsAbstractResponse
 *
 * @brief  Interface class for processing AWS responses
 *
 * Typically instances of AwsAbstractResponse-derviced classes are returned by
 * their respective AwsAbstractRequest-derived classes, often via an
 * intermediate AwsAbstractClient-derived class.
 *
 * For example, sending an SqsCreateQueueRequest results in a pointer to an
 * SqsCreateQueueResponse object, optionally via an SqsClient instance.
 *
 * @see  AwsAbstractRequest
 * @see  AwsAbstractClient
 */

/**
 * @brief  Constructs a new AwsAbstractResponse object.
 *
 * @param  parent  This object's parent.
 */
AwsAbstractResponse::AwsAbstractResponse(QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractResponsePrivate(this))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractResponse object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AwsAbstractRequestPrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
AwsAbstractResponse::AwsAbstractResponse(AwsAbstractResponsePrivate * const d,
                                         QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

/**
 * @brief AwsAbstractResponse destructor.
 */
AwsAbstractResponse::~AwsAbstractResponse()
{
    delete d_ptr->request;
    delete d_ptr;
}

/**
 * @brief Get this response's error string.
 *
 * This base implementation returns either the internal network reply object's
 * error string (if the reply object has an error), or the internal XML parse
 * error (if one was set, eg via set setXmlError), otherwise a null QString.
 *
 * Derived classes may override this function to support additional error types.
 * Typically such derived implementations would check this base implementation's
 * result first, or fallback to this base implementation.  For example:
 *
 * @code
 * if (weHaveOurOwnCustomError()) {
 *     return customErrorString();
 * } else {
 *     return AwsAbstractResponse::errorString();
 * }
 * @endcode
 *
 * @return  An error string, or a null QString if this response has no errors.
 *
 * @see  hasError
 * @see  networkError
 * @see  xmlParseError
 */
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

/**
 * @brief  Did any error occurr processing this reponse?
 *
 * Errors could be anything from network requests errors, to errors validating
 * AWS response content.
 *
 * This base implementation supports network, and XML parsing errors. Derived
 * classes may override this function to support additional error types.
 *
 * @return \c true if this response contains one or more errors, \c false
 *         otherwise.
 *
 * @note  This function may be equivalent to !isValid, however, it is not safe
 *        for this function's implementation to be just that, since derived
 *        classes may assume the inverse, resulting in an infinite cycle between
 *        the two functions.
 *
 * @see  errorString
 * @see  isValid
 */
bool AwsAbstractResponse::hasError() const
{
    Q_D(const AwsAbstractResponse);
    return (((d->reply) && (d->reply->error() != QNetworkReply::NoError)) ||
            (d->xmlError != QXmlStreamReader::NoError));
}

/**
 * @brief  Is this AWS response valid?
 *
 * This base implementation simply checks for the absense of network and XML
 * parsing errors.  Derived classes may override this function to check other
 * error types, and/or apply additional validation rules.
 *
 * @return \c true if this response is considered valid, \c false otherwise.
 *
 * @note  This function may be equivalent to !hasError, however, it is not safe
 *        for this function's implementation to be just that, since derived
 *        classes may assume the inverse, resulting in an infinite cycle between
 *        the two functions.
 *
 * @see  hasError
 */
bool AwsAbstractResponse::isValid() const
{
    Q_D(const AwsAbstractResponse);
    return (((!d->reply) || (d->reply->error() == QNetworkReply::NoError)) &&
            (d->xmlError == QXmlStreamReader::NoError));
}

/**
 * @brief  Get this response's network error, if there is one.
 *
 * @return This response's network error, if there is one, otherwise
 *         QNetworkReply::NoError.
 *
 * @see  hasError
 * @see  errorString
 */
QNetworkReply::NetworkError AwsAbstractResponse::networkError() const
{
    Q_D(const AwsAbstractResponse);
    return (d->reply) ? d->reply->error() : QNetworkReply::NoError;
}

/**
 * @brief  Get this response's XML parse error, if there is one.
 *
 * @return This response's XML parse error, if there is one, otherwise
 *         QXmlStreamReader::NoError.
 *
 * @see  hasError
 * @see  errorString
 */
QXmlStreamReader::Error AwsAbstractResponse::xmlParseError() const
{
    Q_D(const AwsAbstractResponse);
    return d->xmlError;
}

/**
 * @brief  Get this response's XML parse error string, if there is one.
 *
 * @return This response's XML parse error string, if there is one, otherwise
 *         a null QString.
 *
 * @see  hasError
 * @see  errorString
 */
QString AwsAbstractResponse::xmlParseErrorString() const
{
    Q_D(const AwsAbstractResponse);
    return d->xmlErrorString;
}

/**
 * @fn     const AwsAbstractRequest * AwsAbstractResponse::request() const
 *
 * @brief  Get this response's originating AWS request.
 *
 * @return This response's originating AWS request.
 */

/**
 * @brief  Convert an XML stream to a hierarchical QVariantMap.
 *
 * This function is used internally to embed opaque XML structures, such as the
 * SQS service's ErrorResponse::Error::Detail, which the SQS schema defines as
 * an arbitrary complex type.
 *
 * @note   This static function exists within the AwsAbstractResponse for
 *         historic reasons.  It should probably be moved our of this class, and
 *         into a more generic utility space at some point.
 *
 * @param  xml       XML stream to convert.
 * @param  prefix    Prefix to apply to special (non-element) child entry names.
 * @param  maxDepth  Maximum depth to traverse before truncating the tree.
 *
 * @return A QVariantMap representing the \a xml XML fragment.
 *
 * @todo   Move this toVariant function to somewhere more generic.
 */
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
        case QXmlStreamReader::StartElement: {
            const QString elementName = xml.name().toString();
            map.insertMulti(elementName, toVariant(xml, prefix, maxDepth-1));
            break;
        }
        default:
            qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                          .arg(xml.tokenString()).arg(xml.tokenType());
        }
    }
    return map;
}

/**
 * @brief  Does a network reply indicate a successful response?
 *
 * This base implementation simply checks that \a reply has no errors, and that
 * it represents an HTTP response with a 2xx HTTP status code.
 *
 * Derived classes may override this function to perform other checks, and/or to
 * support non-HTTP responses.
 *
 * This function is used by the base implementation of the parse function, to
 * delegate responsibility to either the parseSuccess or parseFailure functions.
 *
 * @param  reply  Network reply to check for success.
 *
 * @return  \c true if \a reply indicates a successful response, \c false otherwise.
 *
 * @see  parse
 */
bool AwsAbstractResponse::isSuccess(QNetworkReply * const reply) const
{
    return ((reply->error() == QNetworkReply::NoError) &&
            ((reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() / 100) == 2));
}

/**
 * @brief  Set the network reply from which to expect an AWS response.
 *
 * @param  reply  Network reply to an AWS requests.
 */
void AwsAbstractResponse::setReply(QNetworkReply * const reply)
{
    Q_D(AwsAbstractResponse);
    connect(reply, SIGNAL(finished()), this, SLOT(replyFinished()));
    d->reply = reply;
}

/**
 * @brief  Set this response's originating AWS request.
 *
 * @note   This object will take ownership of the \a request pointer, and will
 *         \c delete \a request on destruction.
 *
 * Callers should normally create a new request instance (making use of the
 * request classes' copy-constructors).  For example:
 *
 * @code
 * setRequest(new SpecializedAwsRequest(specializedRequest));
 * @endcode
 *
 * @param  request  AWS request to set.
 */
void AwsAbstractResponse::setRequest(const AwsAbstractRequest * const request)
{
    Q_D(AwsAbstractResponse);
    delete d->request;
    d->request = request;
}

/**
 * @brief  Record the details of an XML parse error.
 *
 * If \a xml has no error, this effectively clears any existing XML parsing
 * error.
 *
 * @param  xml  XML reader from which to fetch an parse error code and string.
 *
 * @see  xmlParseError
 * @see  xmlParseErrorString
 */
void AwsAbstractResponse::setXmlError(const QXmlStreamReader &xml)
{
    Q_D(AwsAbstractResponse);
    d->xmlError = xml.error();
    d->xmlErrorString = xml.errorString();
}

/**
 * @brief  Parse an AWS response from a network reply.
 *
 * This base implementation reports networks, if any occurred, otherwise uses
 * the result of the virtual isSuccess function to delegate parsing to either
 * the pure virtual parseSuccess or pure virtual parseFailure methods.
 *
 * Typically derived classes will only implement parseSuccess and parseFailure,
 * without needing to override this function.
 *
 * @param  reply  Network reply from which to parse the AWS response.
 *
 * @see  isSuccess
 * @see  parseSuccess
 * @see  parseFailure
 */
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

/**
 * @fn     void AwsAbstractResponse::parseFailure(QIODevice &response)
 *
 * @brief  Parse a failure response.
 *
 * Derived classes must implement this function to process failure responses
 * (as defined by the virtual isSuccess function).
 *
 * @param  response  Response to parse.
 */

/**
 * @fn     void AwsAbstractResponse::parseSuccess(QIODevice &response)
 *
 * @brief  Parse a successful response.
 *
 * Derived classes must implement this function to process successful responses
 * (as defined by the virtual isSuccess function).
 *
 * @param  response  Response to parse.
 */

/**
 * @brief  Slot to be invoked when the internal network reply is finished.
 *
 * This slot should only be connectedd to QNetworkReply signals (specifcally,
 * this function asserts that the signal sender is an qobject-castable to
 * QNetworkReply).
 *
 * This is convenience slot, that really exists just to abstract the sender
 * casting logic from the parse function (ie so derived classes can override
 * parse without having to implement explicit casts).
 */
void AwsAbstractResponse::replyFinished()
{
    QNetworkReply * const reply = qobject_cast<QNetworkReply *>(sender());
    Q_ASSERT(reply);
    if (reply) {
        parse(reply);
    }
}

/**
 * @fn     void AwsAbstractResponse::finished()
 *
 * @brief  Signal emitted when this object has finished parsing the response.
 *
 * Upon receiving this signal, slots should check isValid or hasError to check
 * if the response was successful or not.
 *
 * @see    hasError
 * @see    isValid
 */

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
    : reply(NULL), request(NULL), xmlError(QXmlStreamReader::NoError), q_ptr(q)
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

} // namespace Client
} // namespace QtAws
