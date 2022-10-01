// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREQUESTVALIDATORREQUEST_P_H
#define QTAWS_UPDATEREQUESTVALIDATORREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updaterequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRequestValidatorRequest;

class UpdateRequestValidatorRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateRequestValidatorRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateRequestValidatorRequest * const q);
    UpdateRequestValidatorRequestPrivate(const UpdateRequestValidatorRequestPrivate &other,
                                   UpdateRequestValidatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
