// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESREQUEST_P_H
#define QTAWS_REGISTERTRANSITGATEWAYMULTICASTGROUPSOURCESREQUEST_P_H

#include "ec2request_p.h"
#include "registertransitgatewaymulticastgroupsourcesrequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterTransitGatewayMulticastGroupSourcesRequest;

class RegisterTransitGatewayMulticastGroupSourcesRequestPrivate : public Ec2RequestPrivate {

public:
    RegisterTransitGatewayMulticastGroupSourcesRequestPrivate(const Ec2Request::Action action,
                                   RegisterTransitGatewayMulticastGroupSourcesRequest * const q);
    RegisterTransitGatewayMulticastGroupSourcesRequestPrivate(const RegisterTransitGatewayMulticastGroupSourcesRequestPrivate &other,
                                   RegisterTransitGatewayMulticastGroupSourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTransitGatewayMulticastGroupSourcesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
