// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSEREQUEST_P_H
#define QTAWS_UPDATEROUTERESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updaterouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteResponseRequest;

class UpdateRouteResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateRouteResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateRouteResponseRequest * const q);
    UpdateRouteResponseRequestPrivate(const UpdateRouteResponseRequestPrivate &other,
                                   UpdateRouteResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
