// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTGATEWAYREQUEST_P_H
#define QTAWS_STARTGATEWAYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "startgatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class StartGatewayRequest;

class StartGatewayRequestPrivate : public StorageGatewayRequestPrivate {

public:
    StartGatewayRequestPrivate(const StorageGatewayRequest::Action action,
                                   StartGatewayRequest * const q);
    StartGatewayRequestPrivate(const StartGatewayRequestPrivate &other,
                                   StartGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartGatewayRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
