// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANKEYREQUEST_P_H
#define QTAWS_DELETEUSAGEPLANKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleteusageplankeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanKeyRequest;

class DeleteUsagePlanKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteUsagePlanKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteUsagePlanKeyRequest * const q);
    DeleteUsagePlanKeyRequestPrivate(const DeleteUsagePlanKeyRequestPrivate &other,
                                   DeleteUsagePlanKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUsagePlanKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
