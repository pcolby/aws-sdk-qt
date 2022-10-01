// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYMULTICASTDOMAINRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayMulticastDomainResponse;

class DeleteTransitGatewayMulticastDomainResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayMulticastDomainResponsePrivate(DeleteTransitGatewayMulticastDomainResponse * const q);

    void parseDeleteTransitGatewayMulticastDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayMulticastDomainResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayMulticastDomainResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
