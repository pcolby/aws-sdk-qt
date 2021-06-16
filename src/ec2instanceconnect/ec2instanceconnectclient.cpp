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
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "ec2instanceconnectclient.h"
#include "ec2instanceconnectclient_p.h"

#include "core/awssignaturev4.h"
#include "sendsshpublickeyrequest.h"
#include "sendsshpublickeyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::EC2InstanceConnect
 * \brief Contains classess for accessing AWS EC2 Instance Connect.
 *
 * \inmodule QtAwsEC2InstanceConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EC2InstanceConnect {

/*!
 * \class QtAws::EC2InstanceConnect::EC2InstanceConnectClient
 * \brief The EC2InstanceConnectClient class provides access to the AWS EC2 Instance Connect service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEC2InstanceConnect
 *
 *  AWS EC2 Connect Service is a service that enables system administrators to publish temporary SSH keys to their EC2
 *  instances in order to establish connections to their instances without leaving a permanent authentication
 */

/*!
 * \brief Constructs a EC2InstanceConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EC2InstanceConnectClient::EC2InstanceConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EC2InstanceConnectClientPrivate(this), parent)
{
    Q_D(EC2InstanceConnectClient);
    d->apiVersion = QStringLiteral("2018-04-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ec2-instance-connect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS EC2 Instance Connect");
    d->serviceName = QStringLiteral("ec2-instance-connect");
}

/*!
 * \overload EC2InstanceConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EC2InstanceConnectClient::EC2InstanceConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EC2InstanceConnectClientPrivate(this), parent)
{
    Q_D(EC2InstanceConnectClient);
    d->apiVersion = QStringLiteral("2018-04-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ec2-instance-connect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS EC2 Instance Connect");
    d->serviceName = QStringLiteral("ec2-instance-connect");
}

/*!
 * Sends \a request to the EC2InstanceConnectClient service, and returns a pointer to an
 * SendSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Pushes an SSH public key to a particular OS user on a given EC2 instance for 60
 */
SendSSHPublicKeyResponse * EC2InstanceConnectClient::sendSSHPublicKey(const SendSSHPublicKeyRequest &request)
{
    return qobject_cast<SendSSHPublicKeyResponse *>(send(request));
}

/*!
 * \class QtAws::EC2InstanceConnect::EC2InstanceConnectClientPrivate
 * \brief The EC2InstanceConnectClientPrivate class provides private implementation for EC2InstanceConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEC2InstanceConnect
 */

/*!
 * Constructs a EC2InstanceConnectClientPrivate object with public implementation \a q.
 */
EC2InstanceConnectClientPrivate::EC2InstanceConnectClientPrivate(EC2InstanceConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace EC2InstanceConnect
} // namespace QtAws
