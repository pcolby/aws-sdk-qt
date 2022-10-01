// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYMULTICASTDOMAINREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewaymulticastdomainrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayMulticastDomainRequest;

class DeleteTransitGatewayMulticastDomainRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayMulticastDomainRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayMulticastDomainRequest * const q);
    DeleteTransitGatewayMulticastDomainRequestPrivate(const DeleteTransitGatewayMulticastDomainRequestPrivate &other,
                                   DeleteTransitGatewayMulticastDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayMulticastDomainRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
