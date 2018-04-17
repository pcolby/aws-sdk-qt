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

#include "awsabstractrequest.h"
#include "awsabstractrequest_p.h"

#include "awsabstractcredentials.h"
#include "awsabstractsignature.h"

#include <QDebug>
#include <QNetworkRequest>

namespace QtAws {
namespace Core {

/*!
 * \class QtAws::Core::AwsAbstractRequest
 * \brief The AwsAbstractRequest class provides an interface for AWS requests.
 *
 * \inmodule QtAwsCore
 *
 * Typically, a user would pass a derived class (such as SqsCreateQueueRequest)
 * to an AwsAbstractClient-derived class (such as SqsClient) to send a request
 * to an AWS service.
 *
 * Note, by design, requests based on this class are endpoint-agnostic.  That is,
 * you may instantiate a request (such as an SqsCreateQueueRequest), and pass it
 * to multiple clients (such as a US instance of SqsClient as well as an AU
 * instance of SqsClient).  Thus it is the caller (typically an
 * AwsAbstractClient-derived class) that is responsible for for setting the
 * region / endpoint information, allowing requests to be reused unmodified
 * multiple times, and/or in multiple regions.
 */

/*!
 * Constructs an AwsAbstractRequest object.
 */
AwsAbstractRequest::AwsAbstractRequest()
    : d_ptr(new AwsAbstractRequestPrivate(this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AwsAbstractRequest::AwsAbstractRequest(const AwsAbstractRequest &other)
    : d_ptr(new AwsAbstractRequestPrivate(*other.d_ptr, this))
{

}

/*!
 * Sets the AwsAbstractRequest object to be equal to \a other.
 */
AwsAbstractRequest &AwsAbstractRequest::operator=(const AwsAbstractRequest &other)
{
    Q_D(AwsAbstractRequest);
    d->data = other.d_func()->data;
    d->operation = other.d_func()->operation;
    return *this;
}

/*!
 * \internal
 *
 * Constructs an AwsAbstractRequest object with private implementation \a d.
 */
AwsAbstractRequest::AwsAbstractRequest(AwsAbstractRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Destroys the AWS request.
 */
AwsAbstractRequest::~AwsAbstractRequest()
{
    delete d_ptr;
}

/*!
 * \fn bool AwsAbstractRequest::isValid() const;
 *
 * Returns \c true if this request is valid; \c false otherwise.
 *
 * Derived classes must implement this function to provide a level of request
 * validation relevant to the type of request being implemented.
 *
 * In this context, "valid" means that with valid credentials, the request's
 * networkRequest method should return a request that the caller can reasonably
 * expect AWS to accept (ignoring server side access restrictions and the like).
 */

/*!
 * Returns data to be included with \c PUT and/or \c POST operations.
 */
QByteArray AwsAbstractRequest::data() const
{
    Q_D(const AwsAbstractRequest);
    return d->data;
}

/*!
 * Returns a QNetwokrRequest object that can be used to send this AWS request
 * to Amazon.
 *
 * This base implementation fetches the basic request for \a endpoint via
 * unsignedRequest, then uses \a signature and \a credentials to sign the
 * request before returning to the caller.
 *
 * Derived classes may override this if their specific AWS service required
 * more advanced logic (or disallow signing, for example).
 */
QNetworkRequest AwsAbstractRequest::networkRequest(
    const QUrl &endpoint,
    const AwsAbstractSignature &signature,
    const AwsAbstractCredentials &credentials) const
{
    QNetworkRequest request(unsignedRequest(endpoint));
    signature.sign(credentials, operation(), request, data());
    return request;
}

/*!
 * Returns the network operation to use when sending this request.
 *
 * This defaults to QNetworkAccessManager::GetOperation unless overridden or
 * changed via setOperation.
 */
QNetworkAccessManager::Operation AwsAbstractRequest::operation() const
{
    Q_D(const AwsAbstractRequest);
    return d->operation;
}

/*!
 * Sends this request to the Amazon \a endpoint via network access \a manager.
 *
 * If appropriate, \a signature and \a credentials will be used to sign the
 * request.
 *
 * Returns an AwsAbstractResponse-derived object representing the AWS service's
 * response.
 */
AwsAbstractResponse * AwsAbstractRequest::send(QNetworkAccessManager &manager,
                                               const QUrl &endpoint,
                                               const AwsAbstractSignature &signature,
                                               const AwsAbstractCredentials &credentials) const
{
    Q_ASSERT(isValid());
    Q_D(const AwsAbstractRequest);
    const QNetworkRequest request(networkRequest(endpoint, signature, credentials));
    qDebug() << "Request URL:" << request.url().toString(QUrl::FullyEncoded);
    if (request.hasRawHeader("Authorization")) {
        qDebug() << "Authorization:" << request.rawHeader("Authorization");
    }
    switch (operation()) {
        case QNetworkAccessManager::DeleteOperation:
            return response(manager.deleteResource(request));
        case QNetworkAccessManager::HeadOperation:
            return response(manager.head(request));
        case QNetworkAccessManager::GetOperation:
            return response(manager.get(request));
        case QNetworkAccessManager::PostOperation:
            return response(d->post(manager, request));
        case QNetworkAccessManager::PutOperation:
            return response(d->put(manager, request));
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid operation");
    }
    return NULL;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 */
bool AwsAbstractRequest::operator==(const AwsAbstractRequest &other) const
{
    return ((data() == other.data()) && (operation() == other.operation()));
}

/*!
 * Sets the \a data to be used with POST and/or PUT operations.
 */
void AwsAbstractRequest::setData(const QByteArray &data)
{
    Q_D(AwsAbstractRequest);
    d->data = data;
}

/*!
 * Sets the network \a operation to use when submitting this request.
 */
void AwsAbstractRequest::setOperation(const QNetworkAccessManager::Operation operation)
{
    Q_D(AwsAbstractRequest);
    d->operation = operation;
}

/*!
 * \fn AwsAbstractResponse * AwsAbstractRequest::response(QNetworkReply * const reply) const
 *
 * Return an AWS response object for \a reply.
 *
 * Derived classes must implement this pure virtual function to return the
 * relevant AwsAbstractResponse-derived object for their request type.
 *
 * For example, the SqsCreateQueueRequest::response implementation returns an
 * instance of the related SqsCreateQueueResponse class.  Typically an
 * AwsAbstractClient-derived class will cast this the returned pointer to the
 * relevant known type in its send method.
 */

/*!
 * \fn QNetworkRequest AwsAbstractRequest::unsignedRequest(const QUrl &endpoint) const
 *
 * Returns a network request for this AWS request for the given AWS \a endpoint.
 *
 * Derived classes must implement this pure virtual function to build network
 * requests that the networkRequest function can sign, before being subitted
 * to Amazon.
 */

/*!
 * \class QtAws::Core::AwsAbstractRequestPrivate
 * \brief The AwsAbstractRequestPrivate class provides private implementation for the AwsAbstractRequest class.
 * \internal
 *
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsAbstractRequestPrivate object with public implementation \a q.
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(AwsAbstractRequest * const q)
    : operation(QNetworkAccessManager::GetOperation), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AwsAbstractRequest class's copy constructors.
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(
    const AwsAbstractRequestPrivate &other, AwsAbstractRequest * const q)
    : data(other.data), operation(other.operation), q_ptr(q)
{

}

/*!
 * Destroys the AWS request's private object.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractRequestPrivate::~AwsAbstractRequestPrivate()
{

}

/*!
 * Sends \a request via \a manager, using \c {HTTP POST}.
 *
 * This base implementation simply invokes QNetworkAccessManager::post with the
 * given request, supplying the data from the internal QByteArray object (see
 * AwsAbstractRequest::setData).
 *
 * However, this method exists as a virtual function to allow derived classes to
 * provide alternative implementations that use alternative data sources, such
 * as IO devices for file uploads.
 *
 * This function is only intended to be called by AwsAbstractRequest::send.
 *
 * Returns a QNetworkReply pointer, as returned by \a manager.
 *
 * \sa put
 */
QNetworkReply *AwsAbstractRequestPrivate::post(QNetworkAccessManager &manager,
                                               const QNetworkRequest &request) const
{
    Q_Q(const AwsAbstractRequest);
    return manager.post(request, q->data());
}

/*!
 * Sends \a request via \a manager, using \c {HTTP PUT}.
 *
 * This base implementation simply invokes QNetworkAccessManager::put with the
 * given request, supplying the data from the internal QByteArray object (see
 * AwsAbstractRequest::setData).
 *
 * However, this method exists as a virtual function to allow derived classes to
 * provide alternative implementations that use alternative data sources, such
 * as IO devices for file uploads.
 *
 * This function is only intended to be called by AwsAbstractRequest::send.
 *
 * Returns a QNetworkReply pointer, as returned by \a manager.
 *
 * \sa post
 */
QNetworkReply *AwsAbstractRequestPrivate::put(QNetworkAccessManager &manager,
                                              const QNetworkRequest &request) const
{
    Q_Q(const AwsAbstractRequest);
    return manager.put(request, q->data());
}

} // namespace Core
} // namespace QtAws
