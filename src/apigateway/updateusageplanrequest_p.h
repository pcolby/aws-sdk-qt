// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGEPLANREQUEST_P_H
#define QTAWS_UPDATEUSAGEPLANREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateUsagePlanRequest;

class UpdateUsagePlanRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateUsagePlanRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateUsagePlanRequest * const q);
    UpdateUsagePlanRequestPrivate(const UpdateUsagePlanRequestPrivate &other,
                                   UpdateUsagePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUsagePlanRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
