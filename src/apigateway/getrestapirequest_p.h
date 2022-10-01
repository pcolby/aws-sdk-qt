// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPIREQUEST_P_H
#define QTAWS_GETRESTAPIREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApiRequest;

class GetRestApiRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetRestApiRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetRestApiRequest * const q);
    GetRestApiRequestPrivate(const GetRestApiRequestPrivate &other,
                                   GetRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
