// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTCONNECTGATEWAYREQUEST_P_H
#define QTAWS_CREATEDIRECTCONNECTGATEWAYREQUEST_P_H

#include "directconnectrequest_p.h"
#include "createdirectconnectgatewayrequest.h"

namespace QtAws {
namespace DirectConnect {

class CreateDirectConnectGatewayRequest;

class CreateDirectConnectGatewayRequestPrivate : public DirectConnectRequestPrivate {

public:
    CreateDirectConnectGatewayRequestPrivate(const DirectConnectRequest::Action action,
                                   CreateDirectConnectGatewayRequest * const q);
    CreateDirectConnectGatewayRequestPrivate(const CreateDirectConnectGatewayRequestPrivate &other,
                                   CreateDirectConnectGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDirectConnectGatewayRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
