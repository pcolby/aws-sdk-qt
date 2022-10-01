// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINNAMEREQUEST_P_H
#define QTAWS_DELETEDOMAINNAMEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deletedomainnamerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteDomainNameRequest;

class DeleteDomainNameRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteDomainNameRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteDomainNameRequest * const q);
    DeleteDomainNameRequestPrivate(const DeleteDomainNameRequestPrivate &other,
                                   DeleteDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDomainNameRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
