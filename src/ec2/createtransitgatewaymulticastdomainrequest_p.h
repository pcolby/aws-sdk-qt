// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H
#define QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H

#include "ec2request_p.h"
#include "createtransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayMulticastDomainRequest;

class CreateTransitGatewayMulticastDomainRequestPrivate : public Ec2RequestPrivate {

public:
    CreateTransitGatewayMulticastDomainRequestPrivate(const Ec2Request::Action action,
                                   CreateTransitGatewayMulticastDomainRequest * const q);
    CreateTransitGatewayMulticastDomainRequestPrivate(const CreateTransitGatewayMulticastDomainRequestPrivate &other,
                                   CreateTransitGatewayMulticastDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
