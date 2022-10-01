// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayMulticastDomainResponse;

class CreateTransitGatewayMulticastDomainResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayMulticastDomainResponsePrivate(CreateTransitGatewayMulticastDomainResponse * const q);

    void parseCreateTransitGatewayMulticastDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(CreateTransitGatewayMulticastDomainResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
