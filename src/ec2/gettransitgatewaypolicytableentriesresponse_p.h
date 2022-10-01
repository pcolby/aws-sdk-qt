// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESRESPONSE_P_H
#define QTAWS_GETTRANSITGATEWAYPOLICYTABLEENTRIESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPolicyTableEntriesResponse;

class GetTransitGatewayPolicyTableEntriesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetTransitGatewayPolicyTableEntriesResponsePrivate(GetTransitGatewayPolicyTableEntriesResponse * const q);

    void parseGetTransitGatewayPolicyTableEntriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTransitGatewayPolicyTableEntriesResponse)
    Q_DISABLE_COPY(GetTransitGatewayPolicyTableEntriesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
