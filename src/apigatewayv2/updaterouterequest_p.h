// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTEREQUEST_P_H
#define QTAWS_UPDATEROUTEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updaterouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteRequest;

class UpdateRouteRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateRouteRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateRouteRequest * const q);
    UpdateRouteRequestPrivate(const UpdateRouteRequestPrivate &other,
                                   UpdateRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
