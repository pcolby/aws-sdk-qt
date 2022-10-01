// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_P_H
#define QTAWS_ACCEPTTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AcceptTransitGatewayMulticastDomainAssociationsResponse;

class AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate(AcceptTransitGatewayMulticastDomainAssociationsResponse * const q);

    void parseAcceptTransitGatewayMulticastDomainAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptTransitGatewayMulticastDomainAssociationsResponse)
    Q_DISABLE_COPY(AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
