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

#ifndef QTAWS_EC2INSTANCECONNECTCLIENT_H
#define QTAWS_EC2INSTANCECONNECTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsec2instanceconnectglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Ec2InstanceConnect {

class Ec2InstanceConnectClientPrivate;
class SendSSHPublicKeyRequest;
class SendSSHPublicKeyResponse;
class SendSerialConsoleSSHPublicKeyRequest;
class SendSerialConsoleSSHPublicKeyResponse;

class QTAWSEC2INSTANCECONNECT_EXPORT Ec2InstanceConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    Ec2InstanceConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit Ec2InstanceConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SendSSHPublicKeyResponse * sendSSHPublicKey(const SendSSHPublicKeyRequest &request);
    SendSerialConsoleSSHPublicKeyResponse * sendSerialConsoleSSHPublicKey(const SendSerialConsoleSSHPublicKeyRequest &request);

private:
    Q_DECLARE_PRIVATE(Ec2InstanceConnectClient)
    Q_DISABLE_COPY(Ec2InstanceConnectClient)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
