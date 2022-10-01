// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTRESPONSE_P_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectResponse;

class DeleteTransitGatewayConnectResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteTransitGatewayConnectResponsePrivate(DeleteTransitGatewayConnectResponse * const q);

    void parseDeleteTransitGatewayConnectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayConnectResponse)
    Q_DISABLE_COPY(DeleteTransitGatewayConnectResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
