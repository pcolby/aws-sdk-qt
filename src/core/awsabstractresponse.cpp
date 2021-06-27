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

#include "awsabstractresponse.h"
#include "awsabstractresponse_p.h"
#include "awsabstractrequest.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsAbstractResponse
 * \brief The AwsAbstractResponse class provides an interface for AWS responses.
 *
 * \inmodule QtAwsCore
 *
 * Typically instances of AwsAbstractResponse-derviced classes are returned by
 * their respective AwsAbstractRequest-derived classes, often via an
 * intermediate AwsAbstractClient-derived class.
 *
 * For example, sending an SqsCreateQueueRequest results in a pointer to an
 * SqsCreateQueueResponse object, optionally via an SqsClient instance.
 */

/*!
 * Constructs an AwsAbstractResponse object with parent \a parent.
 */
AwsAbstractResponse::AwsAbstractResponse(QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractResponsePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs an AwsAbstractResponse object with private implementation \a d, and parent \a parent.
 */
AwsAbstractResponse::AwsAbstractResponse(AwsAbstractResponsePrivate * const d,
                                         QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

/*!
 * Destroys the AWS response.
 */
AwsAbstractResponse::~AwsAbstractResponse()
{
    delete d_ptr->request;
    delete d_ptr;
}

/*!
 * Returns the network reply error string, or a null string if none have occurred.
 *
 * This base implementation returns either the internal network reply object's
 * error string (if the reply object has an error), or the internal XML parse
 * error (if one was set, eg via set setXmlError), otherwise a null QString.
 *
 * Derived classes may override this function to support additional error types.
 * Typically such derived implementations would check this base implementation's
 * result first, or fallback to this base implementation.  For example:
 *
 * \code
 * if (weHaveOurOwnCustomError()) {
 *     return customErrorString();
 * } else {
 *     return AwsAbstractResponse::errorString();
 * }
 * \endcode
 *
 * \sa hasError()
 * \sa networkError()
 * \sa xmlParseError()
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

/*!
 * Returns \c true if an error occurred processing this reponse; \c false otherwise.
 *
 * Errors could be anything from network requests errors, to errors validating
 * AWS response content.
 *
 * This base implementation supports network, and XML parsing errors. Derived
 * classes may override this function to support additional error types.
 *
 * \note  This function may be equivalent to !isValid, however, it is not safe
 *        for this function's implementation to be just that, since derived
 *        classes may assume the inverse, resulting in an infinite cycle between
 *        the two functions.
 *
 * \sa errorString()
 * \sa isValid()
 */
bool AwsAbstractResponse::hasError() const
{
    Q_D(const AwsAbstractResponse);
    return (((d->reply) && (d->reply->error() != QNetworkReply::NoError)) ||
            (d->xmlError != QXmlStreamReader::NoError));
}

/*!
 * Returns \c true of this response is valid; \c false otherwise.
 *
 * This base implementation simply checks for the absense of network and XML
 * parsing errors.  Derived classes may override this function to check other
 * error types, and/or apply additional validation rules.
 *
 * \note  This function may be equivalent to !hasError, however, it is not safe
 *        for this function's implementation to be just that, since derived
 *        classes may assume the inverse, resulting in an infinite cycle between
 *        the two functions.
 *
 * \sa hasError()
 */
bool AwsAbstractResponse::isValid() const
{
    Q_D(const AwsAbstractResponse);
    return (((!d->reply) || (d->reply->error() == QNetworkReply::NoError)) &&
            (d->xmlError == QXmlStreamReader::NoError));
}

/*!
 * Returns the network error, or QNetowkrReply::NoError is there is none.
 *
 * \sa hasError()
 * \sa errorString()
 */
QNetworkReply::NetworkError AwsAbstractResponse::networkError() const
{
    Q_D(const AwsAbstractResponse);
    return (d->reply) ? d->reply->error() : QNetworkReply::NoError;
}

/*!
 * Returns the XML parse error if there is one; QXmlStreamReader::NoError otherwise.
 *
 * \sa hasError
 * \sa errorString
 */
QXmlStreamReader::Error AwsAbstractResponse::xmlParseError() const
{
    Q_D(const AwsAbstractResponse);
    return d->xmlError;
}

/*!
 * Returns the XML parse error string, or a null string is there is none.
 *
 * \sa hasError
 * \sa errorString
 */
QString AwsAbstractResponse::xmlParseErrorString() const
{
    Q_D(const AwsAbstractResponse);
    return d->xmlErrorString;
}

/*!
 * \fn const AwsAbstractRequest * AwsAbstractResponse::request() const
 *
 * Return the response's originating AWS request.
 */
const AwsAbstractRequest * AwsAbstractResponse::request() const
{
    Q_D(const AwsAbstractResponse);
    return d->request;
}

/*!
 * Returns a QVariantMap representation of \a xml, stopping at \a maxDepth.
 *
 * If supplied, \a prefix will be applied to special (non-element) child entry
 * names.
 *
 * This function is used internally to embed opaque XML structures, such as the
 * SQS service's ErrorResponse::Error::Detail, which the SQS schema defines as
 * an arbitrary complex type.
 *
 * \note   This static function exists within the AwsAbstractResponse for
 *         historic reasons.  It should probably be moved out of this class, and
 *         into a more generic utility space at some point.
 *
 * @todo   Move this toVariant function to somewhere more generic.
 */
QMultiMap<QString, QVariant> AwsAbstractResponse::toVariant(
    QXmlStreamReader &xml, const QString &prefix, const int maxDepth)
{
    if (maxDepth < 0) {
        qWarning() << QObject::tr("max depth exceeded");
        return QMultiMap<QString, QVariant>();
    }

    if (xml.hasError()) {
        qWarning() << xml.errorString();
        return QMultiMap<QString, QVariant>();
    }

    if (xml.tokenType() == QXmlStreamReader::NoToken)
        xml.readNext();

    if ((xml.tokenType() != QXmlStreamReader::StartDocument) &&
        (xml.tokenType() != QXmlStreamReader::StartElement)) {
        qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                      .arg(xml.tokenString()).arg(xml.tokenType());
        return QMultiMap<QString, QVariant>();
    }

    QMultiMap<QString, QVariant> multiMap;
    if (xml.tokenType() == QXmlStreamReader::StartDocument) {
        multiMap.insert(prefix + QLatin1String("DocumentEncoding"), xml.documentEncoding().toString());
        multiMap.insert(prefix + QLatin1String("DocumentVersion"), xml.documentVersion().toString());
        multiMap.insert(prefix + QLatin1String("StandaloneDocument"), xml.isStandaloneDocument());
    } else {
        if (!xml.namespaceUri().isEmpty())
            multiMap.insert(prefix + QLatin1String("NamespaceUri"), xml.namespaceUri().toString());
        foreach (const QXmlStreamAttribute &attribute, xml.attributes()) {
            QVariantMap attributemultiMap;
            attributemultiMap.insert(QLatin1String("Value"), attribute.value().toString());
            if (!attribute.namespaceUri().isEmpty())
                attributemultiMap.insert(QLatin1String("NamespaceUri"), attribute.namespaceUri().toString());
            if (!attribute.prefix().isEmpty())
                attributemultiMap.insert(QLatin1String("Prefix"), attribute.prefix().toString());
            attributemultiMap.insert(QLatin1String("QualifiedName"), attribute.qualifiedName().toString());
            multiMap.insert(prefix + attribute.name().toString(), attributemultiMap);
        }
    }

    for (xml.readNext(); (!xml.atEnd()) && (xml.tokenType() != QXmlStreamReader::EndElement)
          && (xml.tokenType() != QXmlStreamReader::EndDocument); xml.readNext()) {
        switch (xml.tokenType()) {
        case QXmlStreamReader::Characters:
        case QXmlStreamReader::Comment:
        case QXmlStreamReader::DTD:
        case QXmlStreamReader::EntityReference:
            multiMap.insert(prefix + xml.tokenString(), xml.text().toString());
            break;
        case QXmlStreamReader::ProcessingInstruction:
            multiMap.insert(prefix + xml.processingInstructionTarget().toString(),
                            xml.processingInstructionData().toString());
            break;
        case QXmlStreamReader::StartElement: {
            const QString elementName = xml.name().toString();
            multiMap.insert(elementName, toVariant(xml, prefix, maxDepth-1));
            break;
        }
        default:
            qWarning() << QObject::tr("unexpected XML tokenType %1 (%2)")
                          .arg(xml.tokenString()).arg(xml.tokenType());
        }
    }
    return multiMap;
}

/*!
 * Returns \c true if \a reply represents a successful reponse; \c false otherwise.
 *
 * This base implementation simply checks that \a reply has no errors, and that
 * it represents an HTTP response with a 2xx HTTP status code.
 *
 * Derived classes may override this function to perform other checks, and/or to
 * support non-HTTP responses.
 *
 * This function is used by the base implementation of the parse function, to
 * delegate responsibility to either the parseSuccess or parseFailure functions.
 */
bool AwsAbstractResponse::isSuccess(QNetworkReply * const reply) const
{
    return ((reply->error() == QNetworkReply::NoError) &&
            ((reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() / 100) == 2));
}

/*!
 * Sets the network \a reply to listen for an AWS response.
 */
void AwsAbstractResponse::setReply(QNetworkReply * const reply)
{
    Q_D(AwsAbstractResponse);
    connect(reply, SIGNAL(finished()), this, SLOT(replyFinished()));
    d->reply = reply;
}

/*!
 * Sets the AWS \a request that originated this response.
 *
 * \note   This object will take ownership of the \a request pointer, and will
 *         \c delete \a request on destruction.
 *
 * Callers should normally create a new request instance (making use of the
 * request classes' copy-constructors).  For example:
 *
 * \code
 * setRequest(new SpecializedAwsRequest(specializedRequest));
 * \endcode
 */
void AwsAbstractResponse::setRequest(const AwsAbstractRequest * const request)
{
    Q_D(AwsAbstractResponse);
    delete d->request;
    d->request = request;
}

/*!
 * Sets the XML error from \a xml.
 *
 * If \a xml has no error, this effectively clears any existing XML parsing
 * error.
 *
 * \sa xmlParseError
 * \sa xmlParseErrorString
 */
void AwsAbstractResponse::setXmlError(const QXmlStreamReader &xml)
{
    Q_D(AwsAbstractResponse);
    d->xmlError = xml.error();
    d->xmlErrorString = xml.errorString();
}

/*!
 * Parses an AWS response from a network \a reply.
 *
 * This base implementation reports networks, if any occurred, otherwise uses
 * the result of the virtual isSuccess function to delegate parsing to either
 * the pure virtual parseSuccess or pure virtual parseFailure methods.
 *
 * Typically derived classes will only implement parseSuccess and parseFailure,
 * without needing to override this function.
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

/*!
 * \fn void AwsAbstractResponse::parseFailure(QIODevice &response)
 *
 * Parses a failure \a response.
 *
 * Derived classes must implement this function to process failure responses
 * (as defined by the virtual isSuccess function).
 */

/*!
 * \fn void AwsAbstractResponse::parseSuccess(QIODevice &response)
 *
 * Parses a successful \a response.
 *
 * Derived classes must implement this function to process successful responses
 * (as defined by the virtual isSuccess function).
 */

/*!
 * Executed when the internal network reply is finished.
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

/*!
 * \fn void AwsAbstractResponse::finished()
 *
 * Emitted when this object has finished parsing the response.
 *
 * Upon receiving this signal, slots should check isValid or hasError to check
 * if the response was successful or not.
 */

/*!
 * \class QtAws::Core::AwsAbstractResponsePrivate
 * \brief The AwsAbstractResponsePrivate class provides private implementation for the AwsAbstractResponse class.
 * \internal
 *
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsAbstractResponsePrivate object with public implementation \a q.
 */
AwsAbstractResponsePrivate::AwsAbstractResponsePrivate(AwsAbstractResponse * const q)
    : reply(NULL), request(NULL), xmlError(QXmlStreamReader::NoError), q_ptr(q)
{

}

/*!
 * Destroys the AWS response's private object.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractResponsePrivate::~AwsAbstractResponsePrivate()
{

}

} // namespace Core
} // namespace QtAws
