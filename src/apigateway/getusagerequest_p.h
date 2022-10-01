// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEREQUEST_P_H
#define QTAWS_GETUSAGEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getusagerequest.h"

namespace QtAws {
namespace ApiGateway {

class GetUsageRequest;

class GetUsageRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetUsageRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetUsageRequest * const q);
    GetUsageRequestPrivate(const GetUsageRequestPrivate &other,
                                   GetUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUsageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
