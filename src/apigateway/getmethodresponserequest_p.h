// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETHODRESPONSEREQUEST_P_H
#define QTAWS_GETMETHODRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getmethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class GetMethodResponseRequest;

class GetMethodResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetMethodResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetMethodResponseRequest * const q);
    GetMethodResponseRequestPrivate(const GetMethodResponseRequestPrivate &other,
                                   GetMethodResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
