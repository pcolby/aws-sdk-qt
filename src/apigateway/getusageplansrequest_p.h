// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANSREQUEST_P_H
#define QTAWS_GETUSAGEPLANSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getusageplansrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlansRequest;

class GetUsagePlansRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetUsagePlansRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetUsagePlansRequest * const q);
    GetUsagePlansRequestPrivate(const GetUsagePlansRequestPrivate &other,
                                   GetUsagePlansRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsagePlansRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
