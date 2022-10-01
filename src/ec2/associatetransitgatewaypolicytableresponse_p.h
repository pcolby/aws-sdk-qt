// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_P_H
#define QTAWS_ASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateTransitGatewayPolicyTableResponse;

class AssociateTransitGatewayPolicyTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateTransitGatewayPolicyTableResponsePrivate(AssociateTransitGatewayPolicyTableResponse * const q);

    void parseAssociateTransitGatewayPolicyTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(AssociateTransitGatewayPolicyTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
