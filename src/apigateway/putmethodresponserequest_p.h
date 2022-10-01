// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODRESPONSEREQUEST_P_H
#define QTAWS_PUTMETHODRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "putmethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodResponseRequest;

class PutMethodResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    PutMethodResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   PutMethodResponseRequest * const q);
    PutMethodResponseRequestPrivate(const PutMethodResponseRequestPrivate &other,
                                   PutMethodResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
