// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYRESPONSE_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayResponse;

class DeleteDirectConnectGatewayResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteDirectConnectGatewayResponsePrivate(DeleteDirectConnectGatewayResponse * const q);

    void parseDeleteDirectConnectGatewayResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
