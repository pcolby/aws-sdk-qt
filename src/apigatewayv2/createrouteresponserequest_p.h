// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSEREQUEST_P_H
#define QTAWS_CREATEROUTERESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createrouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteResponseRequest;

class CreateRouteResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateRouteResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateRouteResponseRequest * const q);
    CreateRouteResponseRequestPrivate(const CreateRouteResponseRequestPrivate &other,
                                   CreateRouteResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
