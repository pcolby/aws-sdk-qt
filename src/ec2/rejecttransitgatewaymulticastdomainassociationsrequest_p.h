// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_P_H
#define QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "rejecttransitgatewaymulticastdomainassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayMulticastDomainAssociationsRequest;

class RejectTransitGatewayMulticastDomainAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    RejectTransitGatewayMulticastDomainAssociationsRequestPrivate(const Ec2Request::Action action,
                                   RejectTransitGatewayMulticastDomainAssociationsRequest * const q);
    RejectTransitGatewayMulticastDomainAssociationsRequestPrivate(const RejectTransitGatewayMulticastDomainAssociationsRequestPrivate &other,
                                   RejectTransitGatewayMulticastDomainAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectTransitGatewayMulticastDomainAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
