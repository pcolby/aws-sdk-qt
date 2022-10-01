// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETHODREQUEST_P_H
#define QTAWS_GETMETHODREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getmethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetMethodRequest;

class GetMethodRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetMethodRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetMethodRequest * const q);
    GetMethodRequestPrivate(const GetMethodRequestPrivate &other,
                                   GetMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
