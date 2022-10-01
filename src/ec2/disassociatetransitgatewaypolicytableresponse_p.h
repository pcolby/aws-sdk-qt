// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_P_H
#define QTAWS_DISASSOCIATETRANSITGATEWAYPOLICYTABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DisassociateTransitGatewayPolicyTableResponse;

class DisassociateTransitGatewayPolicyTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DisassociateTransitGatewayPolicyTableResponsePrivate(DisassociateTransitGatewayPolicyTableResponse * const q);

    void parseDisassociateTransitGatewayPolicyTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(DisassociateTransitGatewayPolicyTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
