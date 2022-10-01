// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONREQUEST_P_H
#define QTAWS_CREATEINTEGRATIONREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createintegrationrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationRequest;

class CreateIntegrationRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateIntegrationRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateIntegrationRequest * const q);
    CreateIntegrationRequestPrivate(const CreateIntegrationRequestPrivate &other,
                                   CreateIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
