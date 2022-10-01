// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYCONNECTPEERRESPONSE_P_H
#define QTAWS_CREATETRANSITGATEWAYCONNECTPEERRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayConnectPeerResponse;

class CreateTransitGatewayConnectPeerResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateTransitGatewayConnectPeerResponsePrivate(CreateTransitGatewayConnectPeerResponse * const q);

    void parseCreateTransitGatewayConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(CreateTransitGatewayConnectPeerResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
