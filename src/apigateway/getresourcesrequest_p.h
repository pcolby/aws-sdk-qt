// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESREQUEST_P_H
#define QTAWS_GETRESOURCESREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getresourcesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetResourcesRequest;

class GetResourcesRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetResourcesRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetResourcesRequest * const q);
    GetResourcesRequestPrivate(const GetResourcesRequestPrivate &other,
                                   GetResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourcesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
