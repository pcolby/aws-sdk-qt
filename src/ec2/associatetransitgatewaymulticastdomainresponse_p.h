// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayMulticastDomainResponse;

class AssociateTransitGatewayMulticastDomainResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateTransitGatewayMulticastDomainResponsePrivate(AssociateTransitGatewayMulticastDomainResponse * const q);

    void parseAssociateTransitGatewayMulticastDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayMulticastDomainResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
