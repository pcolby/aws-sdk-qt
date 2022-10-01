// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_P_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYASSOCIATIONRESPONSE_P_H

#include "directconnectresponse_p.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayAssociationResponse;

class UpdateDirectConnectGatewayAssociationResponsePrivate : public DirectConnectResponsePrivate {

public:

    explicit UpdateDirectConnectGatewayAssociationResponsePrivate(UpdateDirectConnectGatewayAssociationResponse * const q);

    void parseUpdateDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDirectConnectGatewayAssociationResponse)
    Q_DISABLE_COPY(UpdateDirectConnectGatewayAssociationResponsePrivate)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
