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

#include "awsabstractclient.h"
#include "awsabstractclient_p.h"

#include "awsabstractcredentials.h"
#include "awsabstractrequest.h"
#include "awsabstractresponse.h"
#include "awsabstractsignature.h"

#include <QDebug>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractClient
 *
 * @brief  Interface class for providing access to individual AWS services.
 */

/**
 * @brief  Constructs a new AwsAbstractClient object.
 *
 * @param  parent This object's parent.
 */
AwsAbstractClient::AwsAbstractClient(QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractClientPrivate(this))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractClient object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AwsAbstractClientPrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
AwsAbstractClient::AwsAbstractClient(AwsAbstractClientPrivate * const d,
                                     QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

/**
 * @brief  AwsAbstractClient destructor.
 */
AwsAbstractClient::~AwsAbstractClient()
{
    Q_D(AwsAbstractClient);
    delete d->signature;
    delete d_ptr;
}

/**
 * @brief  Get the endpoint associated with this AWS client.
 *
 * If a valid QUrl has been set (usually via setEndpoint), then this base
 * implementation will return that QUrl.  Otherwise, this base implementation
 * will use the AwsEndpoint class to determine the endpoint to use based on this
 * object's region and serviceName.
 *
 * @return A QUrl specifying this AWS client's endpoint, or an invalid QUrl if
 *         none has been set.
 *
 * @see  setEndpoint
 * @see  region
 * @see  serviceName
 * @see  AwsEndpoint::getEndpoint
 */
QUrl AwsAbstractClient::endpoint() const
{
    Q_D(const AwsAbstractClient);
    return (d->endpoint.isValid()) ? d->endpoint :
        AwsEndpoint::getEndpoint(AwsRegion::name(region()), serviceName());
}

/**
 * @brief Get the network access manager for this AWS service object.
 *
 * @return The QNetworkAccessManager that handles requests for this object.
 */
QNetworkAccessManager * AwsAbstractClient::networkAccessManager() const
{
    Q_D(const AwsAbstractClient);
    return d->networkAccessManager;
}

/**
 * @brief  Get the AWS region associated with this client.
 *
 * @return The AWS region for this client, or AwsRegion::InvalidRegion if none
 *         has been set.
 *
 * @see  setRegion
 * @see  endpoint
 */
AwsRegion::Region AwsAbstractClient::region() const
{
    Q_D(const AwsAbstractClient);
    return d->region;
}

/**
 * @brief  Send an AWS request.
 *
 * This base implementation simply uses the \a request's \c send method,
 * supplying the necessary resources (ie the credentials, network access
 * manager, and signature object) from this object as required.
 *
 * Derived classes would not normally need to override this method.
 *
 * @param  request  The AWS request to send.
 *
 * @return An object representing the AWS service's response.
 */
AwsAbstractResponse * AwsAbstractClient::send(const AwsAbstractRequest &request)
{
    Q_D(AwsAbstractClient);
    Q_ASSERT(d->credentials);
    Q_ASSERT(d->networkAccessManager);
    Q_ASSERT(d->signature);
    Q_ASSERT(request.isValid());

    if (!d->credentials) {
        qWarning() << "credentials not set";
        return NULL;
    } else if (!d->networkAccessManager) {
        qWarning() << "network access manager not set";
        return NULL;
    } else if (!d->signature) {
        qWarning() << "signature not set";
        return NULL;
    } else if (!request.isValid()) {
        qWarning() << serviceName() << "request not valid";
        return NULL;
    }

    return request.send(*d->networkAccessManager, endpoint(),
                        *d->signature, *d->credentials);
}

/**
 * @brief  Get the name of the Amazon service this client accesses.
 *
 * This base implementation simply returns the name set via setServiceName.
 *
 * @return An Amazon service name, such as "sqs" or "sns".
 *
 * @see  setServiceName
 */
QString AwsAbstractClient::serviceName() const
{
    Q_D(const AwsAbstractClient);
    Q_ASSERT(!d->serviceName.isEmpty());
    return d->serviceName;
}

/**
 * @brief  Set the credentials object for this client to use for signing requests.
 *
 * This object will not take ownership of the supplied \a credentials pointer.
 * It is the caller's responsibility to ensure that the pointer remains valid
 * for the life of this object, or until setCredentials is used to set a new
 * pointer.
 *
 * @param  credentials  Credentials to use for signing requests.
 *
 * @see  sign
 */
void AwsAbstractClient::setCredentials(AwsAbstractCredentials * const credentials)
{
    Q_D(AwsAbstractClient);
    d->credentials = credentials;
}

/**
 * @brief  Set the AWS endpoint to use with this client.
 *
 * Typically, it is simpler for the user to set this client's region instead
 * (via setRegion), and allow this object to then determine the endpoint based
 * on the serviceName and region.  However, this method may be used to set an
 * explicit endpoint URL if desired.
 *
 * @param  endpoint  Endpoint URL to use for sending AWS requests.
 *
 * @see  region
 * @see  send
 * @see  setRegion
 */
void AwsAbstractClient::setEndpoint(const QUrl &endpoint)
{
    Q_D(AwsAbstractClient);
    d->endpoint = endpoint;
}

/**
 * @brief Set the network access manager for this AWS service object.
 *
 * This object will not take ownership of the supplied \a manager pointer.
 * It is the caller's responsibility to ensure that the pointer remains valid
 * for the life of this object, or until setNetworkAccessManager is used to set
 * a new pointer.
 *
 * @param  manager  Network access manager for this AWS service object to use.
 */
void AwsAbstractClient::setNetworkAccessManager(QNetworkAccessManager * const manager)
{
    Q_D(AwsAbstractClient);

    // If \a manager is already our network access manager, drop out early.
    if (d->networkAccessManager == manager) {
        return;
    }

    // If the old network access manager was our parent, disown our parent.
    if ((d->networkAccessManager != NULL) && (parent() == d->networkAccessManager)) {
        setParent(NULL);
    }

    // If we have no parent, set the network access manager as our parent.
    if ((manager != NULL) && (parent() == NULL)) {
        this->setParent(manager);
    }

    // Set the network access manager.
    d->networkAccessManager = manager;
}

/**
 * @brief  Set the AWS region this client accesses.
 *
 * If an endpoint is not explicitly set (eg via setEndpoint), then the supplied
 * value may be used (in conjuction with serviceName) to determine the endpoint
 * URL when sending requests to the AWS service.
 *
 * @param  region  Amazon region for this client to use.
 *
 * @see  send
 * @see  setEndpoint
 */
void AwsAbstractClient::setRegion(const AwsRegion::Region region)
{
    Q_D(AwsAbstractClient);
    d->region = region;
}

/**
 * @brief  Get the credentials object to be used for signing requests.
 *
 * @return An AWS credentials object.
 */
AwsAbstractCredentials * AwsAbstractClient::credentials() const
{
    Q_D(const AwsAbstractClient);
    return d->credentials;
}

/**
 * @brief  Get the signature object to be used for signing requests.
 *
 * @return An AWS signature object.
 */
AwsAbstractSignature * AwsAbstractClient::signature() const
{
    Q_D(const AwsAbstractClient);
    return d->signature;
}

/**
 * @internal
 *
 * @class  AwsAbstractClientPrivate
 *
 * @brief  Private implementation for AwsAbstractClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractClientPrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractClient instance.
 */
AwsAbstractClientPrivate::AwsAbstractClientPrivate(AwsAbstractClient * const q)
    : credentials(NULL), networkAccessManager(NULL),
      region(AwsRegion::InvalidRegion), signature(NULL), q_ptr(q)
{

}

/**
 * @internal
 *
 * @brief  AwsAbstractClientPrivate destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractClientPrivate::~AwsAbstractClientPrivate()
{

}

QTAWS_END_NAMESPACE
