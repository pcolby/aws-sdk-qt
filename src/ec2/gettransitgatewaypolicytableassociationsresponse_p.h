// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEASSOCIATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableAssociationsResponse;

class GetTransitGatewayPolicyTableAssociationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayPolicyTableAssociationsResponsePrivate(GetTransitGatewayPolicyTableAssociationsResponse * const q);

    void parseGetTransitGatewayPolicyTableAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPolicyTableAssociationsResponse)
    Q_DISABLE_COPY(GetTransitGatewayPolicyTableAssociationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
