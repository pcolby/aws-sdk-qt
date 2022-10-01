// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTEREQUEST_P_H
#define QTAWS_DELETEROUTEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleterouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteRequest;

class DeleteRouteRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteRouteRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteRouteRequest * const q);
    DeleteRouteRequestPrivate(const DeleteRouteRequestPrivate &other,
                                   DeleteRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
