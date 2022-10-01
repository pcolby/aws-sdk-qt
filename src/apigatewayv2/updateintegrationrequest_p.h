// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONREQUEST_P_H
#define QTAWS_UPDATEINTEGRATIONREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updateintegrationrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateIntegrationRequest;

class UpdateIntegrationRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateIntegrationRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateIntegrationRequest * const q);
    UpdateIntegrationRequestPrivate(const UpdateIntegrationRequestPrivate &other,
                                   UpdateIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateIntegrationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
