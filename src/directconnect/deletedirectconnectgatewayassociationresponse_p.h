// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayAssociationResponse;

class DeleteDirectConnectGatewayAssociationResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit DeleteDirectConnectGatewayAssociationResponsePrivate(DeleteDirectConnectGatewayAssociationResponse * const q);

    void parseDeleteDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayAssociationResponse)
    Q_DISABLE_COPY(DeleteDirectConnectGatewayAssociationResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
