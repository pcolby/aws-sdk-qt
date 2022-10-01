// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYSREQUEST_P_H
#define QTAWS_GETUSAGEPLANKEYSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getusageplankeysrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeysRequest;

class GetUsagePlanKeysRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetUsagePlanKeysRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetUsagePlanKeysRequest * const q);
    GetUsagePlanKeysRequestPrivate(const GetUsagePlanKeysRequestPrivate &other,
                                   GetUsagePlanKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsagePlanKeysRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
