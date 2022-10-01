// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSERIALCONSOLESSHPUBLICKEYREQUEST_P_H
#define QTAWS_SENDSERIALCONSOLESSHPUBLICKEYREQUEST_P_H

#include "ec2instanceconnectrequest_p.h"
#include "sendserialconsolesshpublickeyrequest.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSerialConsoleSSHPublicKeyRequest;

class SendSerialConsoleSSHPublicKeyRequestPrivate : public Ec2InstanceConnectRequestPrivate {

public:
    SendSerialConsoleSSHPublicKeyRequestPrivate(const Ec2InstanceConnectRequest::Action action,
                                   SendSerialConsoleSSHPublicKeyRequest * const q);
    SendSerialConsoleSSHPublicKeyRequestPrivate(const SendSerialConsoleSSHPublicKeyRequestPrivate &other,
                                   SendSerialConsoleSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendSerialConsoleSSHPublicKeyRequest)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
