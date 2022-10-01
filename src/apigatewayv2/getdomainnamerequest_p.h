// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMEREQUEST_P_H
#define QTAWS_GETDOMAINNAMEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getdomainnamerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDomainNameRequest;

class GetDomainNameRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetDomainNameRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetDomainNameRequest * const q);
    GetDomainNameRequestPrivate(const GetDomainNameRequestPrivate &other,
                                   GetDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDomainNameRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
