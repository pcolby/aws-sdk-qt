// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEGATEWAYREQUEST_P_H
#define QTAWS_DISABLEGATEWAYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "disablegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DisableGatewayRequest;

class DisableGatewayRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DisableGatewayRequestPrivate(const StorageGatewayRequest::Action action,
                                   DisableGatewayRequest * const q);
    DisableGatewayRequestPrivate(const DisableGatewayRequestPrivate &other,
                                   DisableGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
