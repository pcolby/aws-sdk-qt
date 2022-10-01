// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEGATEWAYREQUEST_P_H
#define QTAWS_ACTIVATEGATEWAYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "activategatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ActivateGatewayRequest;

class ActivateGatewayRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ActivateGatewayRequestPrivate(const StorageGatewayRequest::Action action,
                                   ActivateGatewayRequest * const q);
    ActivateGatewayRequestPrivate(const ActivateGatewayRequestPrivate &other,
                                   ActivateGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
