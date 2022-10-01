// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSEREQUEST_P_H
#define QTAWS_DELETEROUTERESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleterouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteResponseRequest;

class DeleteRouteResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteRouteResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteRouteResponseRequest * const q);
    DeleteRouteResponseRequestPrivate(const DeleteRouteResponseRequestPrivate &other,
                                   DeleteRouteResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
