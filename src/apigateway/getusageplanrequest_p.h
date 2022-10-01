// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANREQUEST_P_H
#define QTAWS_GETUSAGEPLANREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanRequest;

class GetUsagePlanRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetUsagePlanRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetUsagePlanRequest * const q);
    GetUsagePlanRequestPrivate(const GetUsagePlanRequestPrivate &other,
                                   GetUsagePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsagePlanRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
