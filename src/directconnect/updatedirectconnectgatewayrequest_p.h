// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTCONNECTGATEWAYREQUEST_P_H
#define QTAWS_UPDATEDIRECTCONNECTGATEWAYREQUEST_P_H

#include "directconnectrequest_p.h"
#include "updatedirectconnectgatewayrequest.h"

namespace QtAws {
namespace DirectConnect {

class UpdateDirectConnectGatewayRequest;

class UpdateDirectConnectGatewayRequestPrivate : public DirectConnectRequestPrivate {

public:
    UpdateDirectConnectGatewayRequestPrivate(const DirectConnectRequest::Action action,
                                   UpdateDirectConnectGatewayRequest * const q);
    UpdateDirectConnectGatewayRequestPrivate(const UpdateDirectConnectGatewayRequestPrivate &other,
                                   UpdateDirectConnectGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDirectConnectGatewayRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
