// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSREQUEST_P_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPMEMBERSREQUEST_P_H

#include "ec2request_p.h"
#include "deregistertransitgatewaymulticastgroupmembersrequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupMembersRequest;

class DeregisterTransitGatewayMulticastGroupMembersRequestPrivate : public Ec2RequestPrivate {

public:
    DeregisterTransitGatewayMulticastGroupMembersRequestPrivate(const Ec2Request::Action action,
                                   DeregisterTransitGatewayMulticastGroupMembersRequest * const q);
    DeregisterTransitGatewayMulticastGroupMembersRequestPrivate(const DeregisterTransitGatewayMulticastGroupMembersRequestPrivate &other,
                                   DeregisterTransitGatewayMulticastGroupMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTransitGatewayMulticastGroupMembersRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
