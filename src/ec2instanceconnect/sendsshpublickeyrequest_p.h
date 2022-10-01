// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDSSHPUBLICKEYREQUEST_P_H
#define QTAWS_SENDSSHPUBLICKEYREQUEST_P_H

#include "ec2instanceconnectrequest_p.h"
#include "sendsshpublickeyrequest.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class SendSSHPublicKeyRequest;

class SendSSHPublicKeyRequestPrivate : public Ec2InstanceConnectRequestPrivate {

public:
    SendSSHPublicKeyRequestPrivate(const Ec2InstanceConnectRequest::Action action,
                                   SendSSHPublicKeyRequest * const q);
    SendSSHPublicKeyRequestPrivate(const SendSSHPublicKeyRequestPrivate &other,
                                   SendSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendSSHPublicKeyRequest)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
