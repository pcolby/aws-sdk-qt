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
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsAbstractClient object.
 *
 * @param parent       This object's parent.
 */
AwsAbstractClient::AwsAbstractClient(
        QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractClientPrivate(this))
{

}

AwsAbstractClient::~AwsAbstractClient()
{
    delete d_ptr;
}

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

AwsRegion::Region AwsAbstractClient::region() const
{
    Q_D(const AwsAbstractClient);
    return d->region;
}

AwsAbstractResponse * AwsAbstractClient::send(const AwsAbstractRequest &request)
{
    Q_D(AwsAbstractClient);
    Q_ASSERT(d->credentials);
    Q_ASSERT(d->networkAccessManager);
    Q_ASSERT(d->signature);
    Q_ASSERT(request.isValid());

    if (!d->credentials) {
        qWarning() << Q_FUNC_INFO << "credentials not set";
        return NULL;
    } else if (!d->networkAccessManager) {
        qWarning() << Q_FUNC_INFO << "network access manager not set";
        return NULL;
    } else if (!d->signature) {
        qWarning() << Q_FUNC_INFO << "signature not set";
        return NULL;
    } else if (!request.isValid()) {
        qWarning() << Q_FUNC_INFO << serviceName() << "request not valid";
        return NULL;
    }

    return request.send(*d->networkAccessManager, endpoint(),
                        *d->signature, *d->credentials);
}

QString AwsAbstractClient::serviceName() const
{
    Q_D(const AwsAbstractClient);
    Q_ASSERT(!d->serviceName.isEmpty());
    return d->serviceName;
}

void AwsAbstractClient::setCredentials(AwsAbstractCredentials * const credentials)
{
    Q_D(AwsAbstractClient);
    d->credentials = credentials;
}

void AwsAbstractClient::setEndpoint(const QUrl &endpoint)
{
    Q_D(AwsAbstractClient);
    d->endpoint = endpoint;
}

/**
 * @brief Set the network access manager for this AWS service object.
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

void AwsAbstractClient::setRegion(const AwsRegion::Region region)
{
    Q_D(AwsAbstractClient);
    d->region = region;
}

AwsAbstractCredentials * AwsAbstractClient::credentials() const
{
    Q_D(const AwsAbstractClient);
    return d->credentials;
}

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
    : credentials(NULL), networkAccessManager(NULL), signature(NULL), q_ptr(q)
{

}

QTAWS_END_NAMESPACE
