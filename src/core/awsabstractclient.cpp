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
#include "awsabstractsignature.h"

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
    //Q_D(AwsAbstractClient);
    /// @todo Set d->credentials
    /// @todo connect(d->credentials, changed, this, credentialsChanged);
}

AwsAbstractClient::~AwsAbstractClient()
{
    delete d_ptr;
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

bool AwsAbstractClient::send(AwsAbstractRequest * const request)
{
    Q_ASSERT(request->isValid());
    Q_D(AwsAbstractClient);
    Q_ASSERT(d->networkAccessManager);

    if ((!d->credentials) || (!d->networkAccessManager) || (!d->signature)) {
        return false;
    }

    connect(request, SIGNAL(finished()), this, SLOT(requestFinished()));

    if (d->credentials && d->credentials->isRefreshable() && d->credentials->isExpired()) {
        d->requestsPendingCredentials.insert(request);
        connect(request, SIGNAL(destroyed(QObject*)), this, SLOT(requestDestroyed(QObject*)));
        d->credentials->refresh();
        return true; /// @todo What to return here?
    }

    request->send(*d->networkAccessManager, *d->signature, *d->credentials);
    return (request->reply() != NULL);
}

/**
 * @brief Set the network access manager for this AWS service object.
 *
 * @param  manager  Network access manager for this AWS service object to use.
 */
void AwsAbstractClient::setNetworkAccessManager(QNetworkAccessManager * const manager)
{
    Q_D(AwsAbstractClient);
    d->networkAccessManager = manager;
}

void AwsAbstractClient::abort()
{
    Q_D(AwsAbstractClient);
    foreach (AwsAbstractRequest * const request, d->requestsPendingCredentials) {
        request->abort();
    }
    d->requestsPendingCredentials.clear();
}

AwsAbstractCredentials * AwsAbstractClient::credentials() const
{
    Q_D(const AwsAbstractClient);
    return d->credentials;
}

void AwsAbstractClient::onRequestFinished(AwsAbstractRequest * const request)
{
    Q_UNUSED(request)
}

AwsAbstractSignature * AwsAbstractClient::signature() const
{
    Q_D(const AwsAbstractClient);
    return d->signature;
}

void AwsAbstractClient::credentialsChanged()
{
    Q_D(AwsAbstractClient);
    foreach (AwsAbstractRequest * const request, d->requestsPendingCredentials) {
        if (credentials()->isExpired()) {
            request->abort();
        } else {
            request->send(*d->networkAccessManager, *d->signature, *d->credentials);
        }
    }
    d->requestsPendingCredentials.clear();
}

void AwsAbstractClient::requestDestroyed(QObject * object)
{
    AwsAbstractRequest * const request =
        qobject_cast<AwsAbstractRequest * const>(object ? object : sender());

    // Remove the request from our pending-requests list (if present).
    Q_D(AwsAbstractClient);
    d->requestsPendingCredentials.remove(request);
}

void AwsAbstractClient::requestFinished(QObject * object)
{
    AwsAbstractRequest * const request =
        qobject_cast<AwsAbstractRequest * const>(object ? object : sender());

    // Remove the request from our pending-requests list (if present).
    Q_D(AwsAbstractClient);
    d->requestsPendingCredentials.remove(request);
    onRequestFinished(request);
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
    : credentials(NULL), endpoint(NULL), networkAccessManager(NULL),
      signature(NULL), q_ptr(q)
{

}

QTAWS_END_NAMESPACE
