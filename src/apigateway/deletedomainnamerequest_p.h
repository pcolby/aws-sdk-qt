// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMEREQUEST_P_H
#define QTAWS_DELETEDOMAINNAMEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletedomainnamerequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDomainNameRequest;

class DeleteDomainNameRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteDomainNameRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteDomainNameRequest * const q);
    DeleteDomainNameRequestPrivate(const DeleteDomainNameRequestPrivate &other,
                                   DeleteDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainNameRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
