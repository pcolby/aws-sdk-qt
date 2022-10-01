// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREQUESTVALIDATORREQUEST_P_H
#define QTAWS_CREATEREQUESTVALIDATORREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createrequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateRequestValidatorRequest;

class CreateRequestValidatorRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateRequestValidatorRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateRequestValidatorRequest * const q);
    CreateRequestValidatorRequestPrivate(const CreateRequestValidatorRequestPrivate &other,
                                   CreateRequestValidatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
