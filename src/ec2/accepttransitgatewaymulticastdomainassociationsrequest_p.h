// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_P_H
#define QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "accepttransitgatewaymulticastdomainassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayMulticastDomainAssociationsRequest;

class AcceptTransitGatewayMulticastDomainAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    AcceptTransitGatewayMulticastDomainAssociationsRequestPrivate(const Ec2Request::Action action,
                                   AcceptTransitGatewayMulticastDomainAssociationsRequest * const q);
    AcceptTransitGatewayMulticastDomainAssociationsRequestPrivate(const AcceptTransitGatewayMulticastDomainAssociationsRequestPrivate &other,
                                   AcceptTransitGatewayMulticastDomainAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptTransitGatewayMulticastDomainAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
