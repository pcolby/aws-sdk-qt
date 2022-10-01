// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTAGEREQUEST_P_H
#define QTAWS_CREATESTAGEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createstagerequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateStageRequest;

class CreateStageRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateStageRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateStageRequest * const q);
    CreateStageRequestPrivate(const CreateStageRequestPrivate &other,
                                   CreateStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
