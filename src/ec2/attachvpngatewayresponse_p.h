// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVPNGATEWAYRESPONSE_P_H
#define QTAWS_ATTACHVPNGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AttachVpnGatewayResponse;

class AttachVpnGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AttachVpnGatewayResponsePrivate(AttachVpnGatewayResponse * const q);

    void parseAttachVpnGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachVpnGatewayResponse)
    Q_DISABLE_COPY(AttachVpnGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
