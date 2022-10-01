// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTAGEREQUEST_P_H
#define QTAWS_UPDATESTAGEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatestagerequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateStageRequest;

class UpdateStageRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateStageRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateStageRequest * const q);
    UpdateStageRequestPrivate(const UpdateStageRequestPrivate &other,
                                   UpdateStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
