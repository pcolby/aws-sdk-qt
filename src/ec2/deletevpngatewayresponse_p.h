// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNGATEWAYRESPONSE_P_H
#define QTAWS_DELETEVPNGATEWAYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnGatewayResponse;

class DeleteVpnGatewayResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpnGatewayResponsePrivate(DeleteVpnGatewayResponse * const q);

    void parseDeleteVpnGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpnGatewayResponse)
    Q_DISABLE_COPY(DeleteVpnGatewayResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
