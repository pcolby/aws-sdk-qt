// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVPNGATEWAYRESPONSE_P_H
#define QTAWS_DETACHVPNGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DetachVpnGatewayResponse;

class DetachVpnGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DetachVpnGatewayResponsePrivate(DetachVpnGatewayResponse * const q);

    void parseDetachVpnGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachVpnGatewayResponse)
    Q_DISABLE_COPY(DetachVpnGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
