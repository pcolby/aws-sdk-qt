// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONSREQUEST_P_H
#define QTAWS_GETINTEGRATIONSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getintegrationsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationsRequest;

class GetIntegrationsRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetIntegrationsRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetIntegrationsRequest * const q);
    GetIntegrationsRequestPrivate(const GetIntegrationsRequestPrivate &other,
                                   GetIntegrationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
