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

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractRequest
 *
 * @brief  Interface class for providing AWS requests
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

/**
 * @brief  Constructs a new AwsAbstractRequest object.
 */
AwsAbstractRequest::AwsAbstractRequest()
    : d_ptr(new AwsAbstractRequestPrivate(this))
{

}

/**
 * @brief  Constructs a new AwsAbstractRequest object by copying another.
 */
AwsAbstractRequest::AwsAbstractRequest(const AwsAbstractRequest &other)
    : d_ptr(new AwsAbstractRequestPrivate(*other.d_ptr, this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
AwsAbstractRequest &AwsAbstractRequest::operator=(const AwsAbstractRequest &other)
{
    Q_D(AwsAbstractRequest);
    d->data = other.d_func()->data;
    d->operation = other.d_func()->operation;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AwsAbstractRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
AwsAbstractRequest::AwsAbstractRequest(AwsAbstractRequestPrivate * const d) : d_ptr(d)
{

}

/**
 * @brief AwsAbstractRequest destructor.
 */
AwsAbstractRequest::~AwsAbstractRequest()
{
    delete d_ptr;
}

/**
 * @fn     bool AwsAbstractRequest::isValid() const
 *
 * @brief  Is this request valid?
 *
 * Derived classes must implement this function to provide a level of request
 * validation relevant to the type of request being implemented.
 *
 * In this context, "valid" means that with valid credentials, the request's
 * networkRequest method should return a request that the caller can reasonably
 * expect AWS to accept (ignoring server side access restrictions and the like).
 *
 * @returns  \c true if this request is considered valid, \c false other.
 */

/**
 * @brief  Get the data, if relevant, to be included with PUT and/or POST operations.
 *
 * @return
 */
QByteArray AwsAbstractRequest::data() const
{
    Q_D(const AwsAbstractRequest);
    return d->data;
}

/**
 * @brief  Construct a QNetworkRequest for this AWS request.
 *
 * This base implementation used the protected unsignedRequest function to fetch
 * the basic request to be sent, then uses \a signature and \a credentials to
 * sign the request before returning to the caller.
 *
 * Derived classes may override this if their specific AWS service required more
 * advanced logic (or disallow signing, for example).
 *
 * @param  endpoint     AWS endpoint the request is to be for.
 * @param  signature    AWS signature class for signing the request.
 * @param  credentials  AWS credentials to use for signing the request.
 *
 * @return  A valid, signed (where appropriate) request that can be sent to via
 *          a network access manager to perform the configured request.
 *
 * @see  unsignedRequest
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

/**
 * @brief  Get the network operation this request uses.
 *
 * This defaults to QNetworkAccessManager::GetOperation unless overridden or
 * changed via setOperation.
 *
 * @return Network operation to use when sending this request.
 *
 * @see  setOperation
 */
QNetworkAccessManager::Operation AwsAbstractRequest::operation() const
{
    Q_D(const AwsAbstractRequest);
    return d->operation;
}

/**
 * @brief  Send this request to a given Amazon endpoint, via the specified
 *         network access manager.
 *
 * @param manager      Network access manager to send the request via.
 * @param endpoint     AWS service endpoint to send the request to.
 * @param signature    Signature implementation to use to sign the request.
 * @param credentials  AWS credentials to use to sign the request.
 *
 * @return  AwsAbstractResponse-derived object representing the AWS service's response.
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

/**
 * @brief  Equality operator.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool AwsAbstractRequest::operator==(const AwsAbstractRequest &other) const
{
    return ((data() == other.data()) && (operation() == other.operation()));
}

/**
 * @brief  Set the data to be used with POST and/or PUT operations.
 *
 * @param  data  POST/PUT data.
 */
void AwsAbstractRequest::setData(const QByteArray &data)
{
    Q_D(AwsAbstractRequest);
    d->data = data;
}

/**
 * @brief  Set the network operation to use when submitting this request.
 *
 * @param  operation  Network operation to use.
 */
void AwsAbstractRequest::setOperation(const QNetworkAccessManager::Operation operation)
{
    Q_D(AwsAbstractRequest);
    d->operation = operation;
}

/**
 * @fn AwsAbstractResponse * AwsAbstractRequest::response(QNetworkReply * const reply) const
 *
 * @brief  Construct an appropriate AWS response object.
 *
 * Derived classes must implement this pure virtual function to return the
 * relevant AwsAbstractResponse-derived object for their request type.
 *
 * For example, the SqsCreateQueueRequest::response implementation returns an
 * instance of the related SqsCreateQueueResponse class.  Typically an
 * AwsAbstractClient-derived class will cast this the returned pointer to the
 * relevant known type in its send method.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AWS response object for \a reply.
 *
 * @see  AwsAbstractClient::send
 */

/**
 * @fn QNetworkRequest AwsAbstractRequest::unsignedRequest(const QUrl &endpoint) const
 *
 * @brief  Build a network request for the given \a endpoint.
 *
 * Derived classes must implement this pure virtual function to build network
 * requests that the networkRequest function can sign, before being subitted
 * to Amazon.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for the given \a endpoint.
 */

/**
 * @internal
 *
 * @class  AwsAbstractRequestPrivate
 *
 * @brief  Private implementation for AwsAbstractRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractRequestPrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractRequest instance.
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(AwsAbstractRequest * const q)
    : operation(QNetworkAccessManager::GetOperation), q_ptr(q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AwsAbstractRequest class's copy constructors.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsRequest instance.
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(
    const AwsAbstractRequestPrivate &other, AwsAbstractRequest * const q)
    : data(other.data), operation(other.operation), q_ptr(q)
{

}

/**
 * @internal
 *
 * @brief  AwsAbstractRequestPrivate destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractRequestPrivate::~AwsAbstractRequestPrivate()
{

}

/**
 * @brief  POST the given \a request via the given \a manager.
 *
 * This base implementation simply invokes QNetworkAccessManager::post with the
 * given request, supplying the data from the internal QDataArray object (see
 * setData).
 *
 * However, this method exists as a virtual function to allow derived classes to
 * provide alternative implementations that use alternative data sources, such
 * as IO devices for file uploads.
 *
 * This function is only intended to be called by AwsAbstractRequest::send.
 *
 * @param  manager  Network manager to send the request via.
 * @param  request  Network request to send.
 *
 * @return  QNetworkReply pointer as returned by \a manager.
 *
 * @see AwsAbstractRequest::send
 * @see AwsAbstractRequest::setData
 * @see put
 */
QNetworkReply *AwsAbstractRequestPrivate::post(QNetworkAccessManager &manager,
                                               const QNetworkRequest &request) const
{
    Q_Q(const AwsAbstractRequest);
    return manager.post(request, q->data());
}

/**
 * @brief  PUT the given \a request via the given \a manager.
 *
 * This base implementation simply invokes QNetworkAccessManager::put with the
 * given request, supplying the data from the internal QDataArray object (see
 * setData).
 *
 * However, this method exists as a virtual function to allow derived classes to
 * provide alternative implementations that use alternative data sources, such
 * as IO devices for file uploads.
 *
 * This function is only intended to be called by AwsAbstractRequest::send.
 *
 * @param  manager  Network manager to send the request via.
 * @param  request  Network request to send.
 *
 * @return  QNetworkReply pointer as returned by \a manager.
 *
 * @see AwsAbstractRequest::send
 * @see AwsAbstractRequest::setData
 * @see post
 */
QNetworkReply *AwsAbstractRequestPrivate::put(QNetworkAccessManager &manager,
                                              const QNetworkRequest &request) const
{
    Q_Q(const AwsAbstractRequest);
    return manager.put(request, q->data());
}

QTAWS_END_NAMESPACE
