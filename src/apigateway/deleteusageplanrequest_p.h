// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANREQUEST_P_H
#define QTAWS_DELETEUSAGEPLANREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleteusageplanrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanRequest;

class DeleteUsagePlanRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteUsagePlanRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteUsagePlanRequest * const q);
    DeleteUsagePlanRequestPrivate(const DeleteUsagePlanRequestPrivate &other,
                                   DeleteUsagePlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUsagePlanRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
