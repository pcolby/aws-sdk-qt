// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHUTDOWNGATEWAYREQUEST_P_H
#define QTAWS_SHUTDOWNGATEWAYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "shutdowngatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ShutdownGatewayRequest;

class ShutdownGatewayRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ShutdownGatewayRequestPrivate(const StorageGatewayRequest::Action action,
                                   ShutdownGatewayRequest * const q);
    ShutdownGatewayRequestPrivate(const ShutdownGatewayRequestPrivate &other,
                                   ShutdownGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(ShutdownGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
