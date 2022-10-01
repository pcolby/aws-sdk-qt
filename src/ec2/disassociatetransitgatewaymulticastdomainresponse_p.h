// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayMulticastDomainResponse;

class DisassociateTransitGatewayMulticastDomainResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateTransitGatewayMulticastDomainResponsePrivate(DisassociateTransitGatewayMulticastDomainResponse * const q);

    void parseDisassociateTransitGatewayMulticastDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayMulticastDomainResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
