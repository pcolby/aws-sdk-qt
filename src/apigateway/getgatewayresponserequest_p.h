// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSEREQUEST_P_H
#define QTAWS_GETGATEWAYRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getgatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponseRequest;

class GetGatewayResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetGatewayResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetGatewayResponseRequest * const q);
    GetGatewayResponseRequestPrivate(const GetGatewayResponseRequestPrivate &other,
                                   GetGatewayResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
