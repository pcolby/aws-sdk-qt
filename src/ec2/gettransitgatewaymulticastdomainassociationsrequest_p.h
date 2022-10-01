// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_P_H
#define QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSREQUEST_P_H

#include "ec2request_p.h"
#include "gettransitgatewaymulticastdomainassociationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayMulticastDomainAssociationsRequest;

class GetTransitGatewayMulticastDomainAssociationsRequestPrivate : public Ec2RequestPrivate {

public:
    GetTransitGatewayMulticastDomainAssociationsRequestPrivate(const Ec2Request::Action action,
                                   GetTransitGatewayMulticastDomainAssociationsRequest * const q);
    GetTransitGatewayMulticastDomainAssociationsRequestPrivate(const GetTransitGatewayMulticastDomainAssociationsRequestPrivate &other,
                                   GetTransitGatewayMulticastDomainAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayMulticastDomainAssociationsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
