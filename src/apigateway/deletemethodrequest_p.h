// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODREQUEST_P_H
#define QTAWS_DELETEMETHODREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletemethodrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodRequest;

class DeleteMethodRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteMethodRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteMethodRequest * const q);
    DeleteMethodRequestPrivate(const DeleteMethodRequestPrivate &other,
                                   DeleteMethodRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMethodRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
