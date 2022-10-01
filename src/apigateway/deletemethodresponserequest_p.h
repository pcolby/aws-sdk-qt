// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODRESPONSEREQUEST_P_H
#define QTAWS_DELETEMETHODRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletemethodresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodResponseRequest;

class DeleteMethodResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteMethodResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteMethodResponseRequest * const q);
    DeleteMethodResponseRequestPrivate(const DeleteMethodResponseRequestPrivate &other,
                                   DeleteMethodResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMethodResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
