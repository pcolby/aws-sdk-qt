// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYRESPONSE_P_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayResponse;

class UpdateDirectConnectGatewayResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit UpdateDirectConnectGatewayResponsePrivate(UpdateDirectConnectGatewayResponse * const q);

    void parseUpdateDirectConnectGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDirectConnectGatewayResponse)
    Q_DISABLE_COPY(UpdateDirectConnectGatewayResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
