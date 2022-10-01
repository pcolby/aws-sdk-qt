// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGEREQUEST_P_H
#define QTAWS_UPDATEUSAGEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateusagerequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateUsageRequest;

class UpdateUsageRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateUsageRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateUsageRequest * const q);
    UpdateUsageRequestPrivate(const UpdateUsageRequestPrivate &other,
                                   UpdateUsageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUsageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
