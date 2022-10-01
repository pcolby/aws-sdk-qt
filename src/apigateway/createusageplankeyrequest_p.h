// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANKEYREQUEST_P_H
#define QTAWS_CREATEUSAGEPLANKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createusageplankeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanKeyRequest;

class CreateUsagePlanKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateUsagePlanKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateUsagePlanKeyRequest * const q);
    CreateUsagePlanKeyRequestPrivate(const CreateUsagePlanKeyRequestPrivate &other,
                                   CreateUsagePlanKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUsagePlanKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
