// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H

#include "ec2request_p.h"
#include "associatetransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayMulticastDomainRequest;

class AssociateTransitGatewayMulticastDomainRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateTransitGatewayMulticastDomainRequestPrivate(const Ec2Request::Action action,
                                   AssociateTransitGatewayMulticastDomainRequest * const q);
    AssociateTransitGatewayMulticastDomainRequestPrivate(const AssociateTransitGatewayMulticastDomainRequestPrivate &other,
                                   AssociateTransitGatewayMulticastDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
