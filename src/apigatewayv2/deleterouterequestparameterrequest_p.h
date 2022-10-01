// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTEREQUESTPARAMETERREQUEST_P_H
#define QTAWS_DELETEROUTEREQUESTPARAMETERREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleterouterequestparameterrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteRequestParameterRequest;

class DeleteRouteRequestParameterRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteRouteRequestParameterRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteRouteRequestParameterRequest * const q);
    DeleteRouteRequestParameterRequestPrivate(const DeleteRouteRequestParameterRequestPrivate &other,
                                   DeleteRouteRequestParameterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteRequestParameterRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
