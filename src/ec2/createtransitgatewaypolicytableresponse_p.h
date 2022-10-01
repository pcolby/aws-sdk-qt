// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYPOLICYTABLERESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYPOLICYTABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayPolicyTableResponse;

class CreateTransitGatewayPolicyTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayPolicyTableResponsePrivate(CreateTransitGatewayPolicyTableResponse * const q);

    void parseCreateTransitGatewayPolicyTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(CreateTransitGatewayPolicyTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
