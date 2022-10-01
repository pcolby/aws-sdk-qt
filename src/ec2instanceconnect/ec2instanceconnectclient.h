// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
