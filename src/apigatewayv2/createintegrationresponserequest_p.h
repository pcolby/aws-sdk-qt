// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_CREATEINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationResponseRequest;

class CreateIntegrationResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateIntegrationResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateIntegrationResponseRequest * const q);
    CreateIntegrationResponseRequestPrivate(const CreateIntegrationResponseRequestPrivate &other,
                                   CreateIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
