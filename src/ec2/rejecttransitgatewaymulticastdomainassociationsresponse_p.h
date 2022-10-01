// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_P_H
#define QTAWS_REJECTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RejectTransitGatewayMulticastDomainAssociationsResponse;

class RejectTransitGatewayMulticastDomainAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RejectTransitGatewayMulticastDomainAssociationsResponsePrivate(RejectTransitGatewayMulticastDomainAssociationsResponse * const q);

    void parseRejectTransitGatewayMulticastDomainAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectTransitGatewayMulticastDomainAssociationsResponse)
    Q_DISABLE_COPY(RejectTransitGatewayMulticastDomainAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
