// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGATEWAYRESPONSEREQUEST_P_H
#define QTAWS_PUTGATEWAYRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "putgatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class PutGatewayResponseRequest;

class PutGatewayResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    PutGatewayResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   PutGatewayResponseRequest * const q);
    PutGatewayResponseRequestPrivate(const PutGatewayResponseRequestPrivate &other,
                                   PutGatewayResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutGatewayResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
