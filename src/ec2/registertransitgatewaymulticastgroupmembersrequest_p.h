// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSREQUEST_P_H
#define QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSREQUEST_P_H

#include "ec2request_p.h"
#include "registertransitgatewaymulticastgroupmembersrequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterTransitGatewayMulticastGroupMembersRequest;

class RegisterTransitGatewayMulticastGroupMembersRequestPrivate : public Ec2RequestPrivate {

public:
    RegisterTransitGatewayMulticastGroupMembersRequestPrivate(const Ec2Request::Action action,
                                   RegisterTransitGatewayMulticastGroupMembersRequest * const q);
    RegisterTransitGatewayMulticastGroupMembersRequestPrivate(const RegisterTransitGatewayMulticastGroupMembersRequestPrivate &other,
                                   RegisterTransitGatewayMulticastGroupMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTransitGatewayMulticastGroupMembersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
