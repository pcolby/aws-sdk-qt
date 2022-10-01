// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTPEERRESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTPEERRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectPeerResponse;

class DeleteTransitGatewayConnectPeerResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayConnectPeerResponsePrivate(DeleteTransitGatewayConnectPeerResponse * const q);

    void parseDeleteTransitGatewayConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayConnectPeerResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayConnectPeerResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
