// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateintegrationresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationResponseRequest;

class UpdateIntegrationResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateIntegrationResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateIntegrationResponseRequest * const q);
    UpdateIntegrationResponseRequestPrivate(const UpdateIntegrationResponseRequestPrivate &other,
                                   UpdateIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIntegrationResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
