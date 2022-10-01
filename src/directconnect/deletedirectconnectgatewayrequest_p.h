// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTCONNECTGATEWAYREQUEST_P_H
#define QTAWS_DELETEDIRECTCONNECTGATEWAYREQUEST_P_H

#include "directconnectrequest_p.h"
#include "deletedirectconnectgatewayrequest.h"

namespace QtAws {
namespace DirectConnect {

class DeleteDirectConnectGatewayRequest;

class DeleteDirectConnectGatewayRequestPrivate : public DirectConnectRequestPrivate {

public:
    DeleteDirectConnectGatewayRequestPrivate(const DirectConnectRequest::Action action,
                                   DeleteDirectConnectGatewayRequest * const q);
    DeleteDirectConnectGatewayRequestPrivate(const DeleteDirectConnectGatewayRequestPrivate &other,
                                   DeleteDirectConnectGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDirectConnectGatewayRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
