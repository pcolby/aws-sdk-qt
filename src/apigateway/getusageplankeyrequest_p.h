// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYREQUEST_P_H
#define QTAWS_GETUSAGEPLANKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getusageplankeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeyRequest;

class GetUsagePlanKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetUsagePlanKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetUsagePlanKeyRequest * const q);
    GetUsagePlanKeyRequestPrivate(const GetUsagePlanKeyRequestPrivate &other,
                                   GetUsagePlanKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsagePlanKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
