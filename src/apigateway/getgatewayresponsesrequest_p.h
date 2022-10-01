// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSESREQUEST_P_H
#define QTAWS_GETGATEWAYRESPONSESREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getgatewayresponsesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponsesRequest;

class GetGatewayResponsesRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetGatewayResponsesRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetGatewayResponsesRequest * const q);
    GetGatewayResponsesRequestPrivate(const GetGatewayResponsesRequestPrivate &other,
                                   GetGatewayResponsesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponsesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
