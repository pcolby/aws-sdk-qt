// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYPOLICYTABLERESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYPOLICYTABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayPolicyTableResponse;

class DeleteTransitGatewayPolicyTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayPolicyTableResponsePrivate(DeleteTransitGatewayPolicyTableResponse * const q);

    void parseDeleteTransitGatewayPolicyTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayPolicyTableResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayPolicyTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
