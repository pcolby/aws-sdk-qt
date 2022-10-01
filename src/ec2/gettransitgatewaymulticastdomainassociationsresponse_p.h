// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYMULTICASTDOMAINASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayMulticastDomainAssociationsResponse;

class GetTransitGatewayMulticastDomainAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayMulticastDomainAssociationsResponsePrivate(GetTransitGatewayMulticastDomainAssociationsResponse * const q);

    void parseGetTransitGatewayMulticastDomainAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayMulticastDomainAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayMulticastDomainAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
