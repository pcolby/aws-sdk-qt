// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREQUESTVALIDATORSREQUEST_P_H
#define QTAWS_GETREQUESTVALIDATORSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getrequestvalidatorsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetRequestValidatorsRequest;

class GetRequestValidatorsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetRequestValidatorsRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetRequestValidatorsRequest * const q);
    GetRequestValidatorsRequestPrivate(const GetRequestValidatorsRequestPrivate &other,
                                   GetRequestValidatorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRequestValidatorsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
