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

#include "awsabstractclient.h"
#include "awsabstractclient_p.h"

#include "awsabstractcredentials.h"
#include "awsabstractrequest.h"
#include "awsabstractresponse.h"
#include "awsabstractsignature.h"

#include <QDebug>
#include <QNetworkRequest>

namespace QtAws {
namespace Core {

/*!
 * \namespace QtAws
 * \brief Encapsulates stuff..
 *
 * \inmodule QtAws
 *
 * @todo move this to a separate qdoc file.
 */

/*!
 * \namespace QtAws::Core
 * \brief Encapsulates stuff..
 *
 * \inmodule QtAwsCore
 *
 * @todo move this to a separate qdoc file.
 */

/*!
 * \class QtAws::Core::AwsAbstractClient
 * \brief The AwsAbstractClient class provides an interface for accessing AWS services.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCore
 */

/*!
 * Constructs an AwsAbstractClient object with parent \a parent.
 */
AwsAbstractClient::AwsAbstractClient(QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractClientPrivate(this))
{

}

/*!
 * \internal
 * \overload
 *
 * Constructs an AwsAbstractClient object with private implementation \a d, and parent \a parent.
 */
AwsAbstractClient::AwsAbstractClient(AwsAbstractClientPrivate * const d,
                                     QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

/*!
 * Destroys the AWS client.
 */
AwsAbstractClient::~AwsAbstractClient()
{
    Q_D(AwsAbstractClient);
    delete d->signature;
    delete d_ptr;
}

/*!
 * Returns the AWS service API version, such as "2017-01-02".
 */
QString AwsAbstractClient::apiVersion() const
{
    Q_D(const AwsAbstractClient);
    Q_ASSERT(!d->apiVersion.isEmpty());
    return d->apiVersion;
}

/*!
 * Returns the AWS endpoint URL.
 *
 * If a valid QUrl has been set (usually via setEndpoint), then this base
 * implementation will return that QUrl.  Otherwise, this base implementation
 * will use the AwsEndpoint class to determine the endpoint to use based on this
 * object's region and serviceName.
 */
QUrl AwsAbstractClient::endpoint() const
{
    /// @todo Use endpointPrefix here.
    Q_D(const AwsAbstractClient);
    return (d->endpoint.isValid()) ? d->endpoint :
        AwsEndpoint::getEndpoint(AwsRegion::name(region()), serviceName());
}

/*!
 * Returns the AWS endpoint prefix, such as "sqs" or "sns".
 *
 * This is the standard endpoint prefix associated with this AWS service, is not
 * affected by any explicit endpoint URL that may have beem set via setEndpoint.
 */
QString AwsAbstractClient::endpointPrefix() const
{
    Q_D(const AwsAbstractClient);
    Q_ASSERT(!d->endpointPrefix.isEmpty());
    return d->endpointPrefix;
}

/*!
 * Returns the network access manager.
 */
QNetworkAccessManager * AwsAbstractClient::networkAccessManager() const
{
    Q_D(const AwsAbstractClient);
    return d->networkAccessManager;
}

/*!
 * Returns the AWS region, or AwsRegion::InvalidRegion if none has been set.
 */
AwsRegion::Region AwsAbstractClient::region() const
{
    Q_D(const AwsAbstractClient);
    return d->region;
}

/*!
 * Sends an AWS request.
 *
 * This base implementation simply uses the \a request's \c send method,
 * supplying the necessary resources (ie the credentials, network access
 * manager, and signature object) from this object as required.
 *
 * Derived classes would not normally need to override this method.
 *
 * Returns an object representing the AWS service's response.
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

/*!
 * Return the Amazon full sercvice name, such as "Amazon Simple Queue Service".
 */
QString AwsAbstractClient::serviceFullName() const
{
    Q_D(const AwsAbstractClient);
    Q_ASSERT(!d->serviceFullName.isEmpty());
    return d->serviceFullName;
}

/*!
 * Returns the Amazon service name, such as "sqs" or "sns".
 *
 * This is name is suitable for generating V4 signatures.
 */
QString AwsAbstractClient::serviceName() const
{
    Q_D(const AwsAbstractClient);
    Q_ASSERT(!d->serviceName.isEmpty());
    return d->serviceName;
}

/*!
 * Sets the \a credentials for signing AWS requests.
 *
 * This object will not take ownership of the supplied \a credentials pointer.
 * It is the caller's responsibility to ensure that the pointer remains valid
 * for the life of this object, or until setCredentials is used to set a new
 * pointer.
 */
void AwsAbstractClient::setCredentials(AwsAbstractCredentials * const credentials)
{
    Q_D(AwsAbstractClient);
    d->credentials = credentials;
}

/*!
 * Sets the AWS \a endpoint to send AWS requests.
 *
 * Typically, it is simpler for the user to set this client's region instead
 * (via setRegion), and allow this object to then determine the endpoint based
 * on the serviceName and region.  However, this method may be used to set an
 * explicit endpoint URL if desired.
 */
void AwsAbstractClient::setEndpoint(const QUrl &endpoint)
{
    Q_D(AwsAbstractClient);
    d->endpoint = endpoint;
}

/*!
 * Sets the network access \a manager for this AWS service object.
 *
 * This object will not take ownership of the supplied \a manager pointer.
 * It is the caller's responsibility to ensure that the pointer remains valid
 * for the life of this object, or until setNetworkAccessManager is used to set
 * a new pointer.
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

    // Set the network access manager.
    d->networkAccessManager = manager;
}

/*!
 * Sets the AWS \a region.
 *
 * If an endpoint is not explicitly set (eg via setEndpoint), then the supplied
 * value may be used (in conjuction with serviceName) to determine the endpoint
 * URL when sending requests to the AWS service.
 */
void AwsAbstractClient::setRegion(const AwsRegion::Region region)
{
    Q_D(AwsAbstractClient);
    d->region = region;
}

/*!
 * Returns credentials for signing requests.
 */
AwsAbstractCredentials * AwsAbstractClient::credentials() const
{
    Q_D(const AwsAbstractClient);
    return d->credentials;
}

/*!
 * Returns signature object for signing requests.
 */
AwsAbstractSignature * AwsAbstractClient::signature() const
{
    Q_D(const AwsAbstractClient);
    return d->signature;
}

/*!
 * \class QtAws::Core::AwsAbstractClientPrivate
 * \brief The AwsAbstractClientPrivate class provides private implementation for the AwsAbstractClient class.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAws::Core
 */

/*!
 * Constructs a AwsAbstractClientPrivate object with public implementation \a q.
 */
AwsAbstractClientPrivate::AwsAbstractClientPrivate(AwsAbstractClient * const q)
    : credentials(NULL), networkAccessManager(NULL),
      region(AwsRegion::InvalidRegion), signature(NULL), q_ptr(q)
{

}

/*!
 * Destroys the AWS client's private object.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractClientPrivate::~AwsAbstractClientPrivate()
{

}

} // namespace Core
} // namespace QtAws
