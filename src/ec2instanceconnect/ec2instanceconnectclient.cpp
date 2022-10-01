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
#include "sendserialconsolesshpublickeyrequest.h"
#include "sendserialconsolesshpublickeyresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Ec2InstanceConnect
 * \brief Contains classess for accessing AWS EC2 Instance Connect.
 *
 * \inmodule QtAwsEc2InstanceConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectClient
 * \brief The Ec2InstanceConnectClient class provides access to the AWS EC2 Instance Connect service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEc2InstanceConnect
 *
 *  Amazon EC2 Instance Connect enables system administrators to publish one-time use SSH public keys to EC2, providing
 *  users a simple and secure way to connect to their
 */

/*!
 * \brief Constructs a Ec2InstanceConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Ec2InstanceConnectClient::Ec2InstanceConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Ec2InstanceConnectClientPrivate(this), parent)
{
    Q_D(Ec2InstanceConnectClient);
    d->apiVersion = QStringLiteral("2018-04-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ec2-instance-connect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS EC2 Instance Connect");
    d->serviceName = QStringLiteral("ec2-instance-connect");
}

/*!
 * \overload Ec2InstanceConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Ec2InstanceConnectClient::Ec2InstanceConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new Ec2InstanceConnectClientPrivate(this), parent)
{
    Q_D(Ec2InstanceConnectClient);
    d->apiVersion = QStringLiteral("2018-04-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ec2-instance-connect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS EC2 Instance Connect");
    d->serviceName = QStringLiteral("ec2-instance-connect");
}

/*!
 * Sends \a request to the Ec2InstanceConnectClient service, and returns a pointer to an
 * SendSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Pushes an SSH public key to the specified EC2 instance for use by the specified user. The key remains for 60 seconds.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Connect-using-EC2-Instance-Connect.html">Connect to your Linux
 * instance using EC2 Instance Connect</a> in the <i>Amazon EC2 User
 */
SendSSHPublicKeyResponse * Ec2InstanceConnectClient::sendSSHPublicKey(const SendSSHPublicKeyRequest &request)
{
    return qobject_cast<SendSSHPublicKeyResponse *>(send(request));
}

/*!
 * Sends \a request to the Ec2InstanceConnectClient service, and returns a pointer to an
 * SendSerialConsoleSSHPublicKeyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Pushes an SSH public key to the specified EC2 instance. The key remains for 60 seconds, which gives you 60 seconds to
 * establish a serial console connection to the instance using SSH. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-serial-console.html">EC2 Serial Console</a> in the
 * <i>Amazon EC2 User
 */
SendSerialConsoleSSHPublicKeyResponse * Ec2InstanceConnectClient::sendSerialConsoleSSHPublicKey(const SendSerialConsoleSSHPublicKeyRequest &request)
{
    return qobject_cast<SendSerialConsoleSSHPublicKeyResponse *>(send(request));
}

/*!
 * \class QtAws::Ec2InstanceConnect::Ec2InstanceConnectClientPrivate
 * \brief The Ec2InstanceConnectClientPrivate class provides private implementation for Ec2InstanceConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a Ec2InstanceConnectClientPrivate object with public implementation \a q.
 */
Ec2InstanceConnectClientPrivate::Ec2InstanceConnectClientPrivate(Ec2InstanceConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Ec2InstanceConnect
} // namespace QtAws
