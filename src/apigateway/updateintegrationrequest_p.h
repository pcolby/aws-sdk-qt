// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONREQUEST_P_H
#define QTAWS_UPDATEINTEGRATIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationRequest;

class UpdateIntegrationRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateIntegrationRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateIntegrationRequest * const q);
    UpdateIntegrationRequestPrivate(const UpdateIntegrationRequestPrivate &other,
                                   UpdateIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
