// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNENDPOINTREQUEST_P_H
#define QTAWS_CREATECLIENTVPNENDPOINTREQUEST_P_H

#include "ec2request_p.h"
#include "createclientvpnendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnEndpointRequest;

class CreateClientVpnEndpointRequestPrivate : public Ec2RequestPrivate {

public:
    CreateClientVpnEndpointRequestPrivate(const Ec2Request::Action action,
                                   CreateClientVpnEndpointRequest * const q);
    CreateClientVpnEndpointRequestPrivate(const CreateClientVpnEndpointRequestPrivate &other,
                                   CreateClientVpnEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateClientVpnEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
