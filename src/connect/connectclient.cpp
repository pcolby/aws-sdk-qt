/*
    Copyright 2013-2018 Paul Colby

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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "connectclient.h"
#include "connectclient_p.h"

#include "core/awssignaturev4.h"
#include "startoutboundvoicecontactrequest.h"
#include "startoutboundvoicecontactresponse.h"
#include "stopcontactrequest.h"
#include "stopcontactresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Connect
 * \brief The QtAws::Connect contains stuff...
 *
 * \inmodule QtAwsConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ConnectClient
 * \brief The ConnectClient class provides access to the Amazon Connect Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 */

/*!
 * \brief Constructs a ConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ConnectClient::ConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectClientPrivate(this), parent)
{
    Q_D(ConnectClient);
    d->apiVersion = QStringLiteral("2017-08-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("connect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Connect Service");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * \overload ConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ConnectClient::ConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectClientPrivate(this), parent)
{
    Q_D(ConnectClient);
    d->apiVersion = QStringLiteral("2017-08-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("connect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Connect Service");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartOutboundVoiceContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>StartOutboundVoiceContact</code> operation initiates a contact flow to place an outbound call to a
 *
 * customer>
 *
 * There is a throttling limit placed on usage of the API that includes a <code>RateLimit</code> of 2 per second, and a
 * <code>BurstLimit</code> of 5 per
 *
 * second>
 *
 * If you are using an IAM account, it must have permissions to the <code>connect:StartOutboundVoiceContact</code>
 */
StartOutboundVoiceContactResponse * ConnectClient::startOutboundVoiceContact(const StartOutboundVoiceContactRequest &request)
{
    return qobject_cast<StartOutboundVoiceContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StopContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends the contact initiated by the <code>StartOutboundVoiceContact</code>
 *
 * operation>
 *
 * If you are using an IAM account, it must have permissions to the <code>connect:StopContact</code>
 */
StopContactResponse * ConnectClient::stopContact(const StopContactRequest &request)
{
    return qobject_cast<StopContactResponse *>(send(request));
}

/*!
 * \class QtAws::Connect::ConnectClientPrivate
 * \brief The ConnectClientPrivate class provides private implementation for ConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectClientPrivate object with public implementation \a q.
 */
ConnectClientPrivate::ConnectClientPrivate(ConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Connect
} // namespace QtAws
