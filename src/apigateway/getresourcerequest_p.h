// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUEST_P_H
#define QTAWS_GETRESOURCEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getresourcerequest.h"

namespace QtAws {
namespace ApiGateway {

class GetResourceRequest;

class GetResourceRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetResourceRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetResourceRequest * const q);
    GetResourceRequestPrivate(const GetResourceRequestPrivate &other,
                                   GetResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
