// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNGATEWAYRESPONSE_P_H
#define QTAWS_CREATEVPNGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnGatewayResponse;

class CreateVpnGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpnGatewayResponsePrivate(CreateVpnGatewayResponse * const q);

    void parseCreateVpnGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpnGatewayResponse)
    Q_DISABLE_COPY(CreateVpnGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
