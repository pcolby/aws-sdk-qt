// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPISREQUEST_P_H
#define QTAWS_GETRESTAPISREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getrestapisrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApisRequest;

class GetRestApisRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetRestApisRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetRestApisRequest * const q);
    GetRestApisRequestPrivate(const GetRestApisRequestPrivate &other,
                                   GetRestApisRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRestApisRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
