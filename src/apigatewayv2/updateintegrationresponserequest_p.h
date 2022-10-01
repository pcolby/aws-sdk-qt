// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updateintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateIntegrationResponseRequest;

class UpdateIntegrationResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateIntegrationResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateIntegrationResponseRequest * const q);
    UpdateIntegrationResponseRequestPrivate(const UpdateIntegrationResponseRequestPrivate &other,
                                   UpdateIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
