// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSERIALCONSOLESSHPUBLICKEYREQUEST_H
#define QTAWS_SENDSERIALCONSOLESSHPUBLICKEYREQUEST_H

#include "ec2instanceconnectrequest.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSerialConsoleSSHPublicKeyRequestPrivate;

class QTAWSEC2INSTANCECONNECT_EXPORT SendSerialConsoleSSHPublicKeyRequest : public Ec2InstanceConnectRequest {

public:
    SendSerialConsoleSSHPublicKeyRequest(const SendSerialConsoleSSHPublicKeyRequest &other);
    SendSerialConsoleSSHPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendSerialConsoleSSHPublicKeyRequest)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
