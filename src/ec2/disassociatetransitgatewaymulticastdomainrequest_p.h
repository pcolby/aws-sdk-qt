// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H

#include "ec2request_p.h"
#include "disassociatetransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayMulticastDomainRequest;

class DisassociateTransitGatewayMulticastDomainRequestPrivate : public Ec2RequestPrivate {

public:
    DisassociateTransitGatewayMulticastDomainRequestPrivate(const Ec2Request::Action action,
                                   DisassociateTransitGatewayMulticastDomainRequest * const q);
    DisassociateTransitGatewayMulticastDomainRequestPrivate(const DisassociateTransitGatewayMulticastDomainRequestPrivate &other,
                                   DisassociateTransitGatewayMulticastDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
