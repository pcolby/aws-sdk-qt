// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANREQUEST_P_H
#define QTAWS_CREATEUSAGEPLANREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanRequest;

class CreateUsagePlanRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateUsagePlanRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateUsagePlanRequest * const q);
    CreateUsagePlanRequestPrivate(const CreateUsagePlanRequestPrivate &other,
                                   CreateUsagePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUsagePlanRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
