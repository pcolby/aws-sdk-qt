// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORREQUEST_P_H
#define QTAWS_GETREQUESTVALIDATORREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getrequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorRequest;

class GetRequestValidatorRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetRequestValidatorRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetRequestValidatorRequest * const q);
    GetRequestValidatorRequestPrivate(const GetRequestValidatorRequestPrivate &other,
                                   GetRequestValidatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
