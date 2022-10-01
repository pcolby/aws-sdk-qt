// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSESREQUEST_P_H
#define QTAWS_GETINTEGRATIONRESPONSESREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getintegrationresponsesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponsesRequest;

class GetIntegrationResponsesRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetIntegrationResponsesRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetIntegrationResponsesRequest * const q);
    GetIntegrationResponsesRequestPrivate(const GetIntegrationResponsesRequestPrivate &other,
                                   GetIntegrationResponsesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponsesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
