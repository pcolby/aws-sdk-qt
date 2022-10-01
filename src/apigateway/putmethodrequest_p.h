// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODREQUEST_P_H
#define QTAWS_PUTMETHODREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "putmethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodRequest;

class PutMethodRequestPrivate : public ApiGatewayRequestPrivate {

public:
    PutMethodRequestPrivate(const ApiGatewayRequest::Action action,
                                   PutMethodRequest * const q);
    PutMethodRequestPrivate(const PutMethodRequestPrivate &other,
                                   PutMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
