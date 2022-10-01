// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESREQUEST_P_H
#define QTAWS_DEREGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESREQUEST_P_H

#include "ec2request_p.h"
#include "deregistertransitgatewaymulticastgroupsourcesrequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterTransitGatewayMulticastGroupSourcesRequest;

class DeregisterTransitGatewayMulticastGroupSourcesRequestPrivate : public Ec2RequestPrivate {

public:
    DeregisterTransitGatewayMulticastGroupSourcesRequestPrivate(const Ec2Request::Action action,
                                   DeregisterTransitGatewayMulticastGroupSourcesRequest * const q);
    DeregisterTransitGatewayMulticastGroupSourcesRequestPrivate(const DeregisterTransitGatewayMulticastGroupSourcesRequestPrivate &other,
                                   DeregisterTransitGatewayMulticastGroupSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTransitGatewayMulticastGroupSourcesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
