// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKSREQUEST_P_H
#define QTAWS_GETVPCLINKSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getvpclinksrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinksRequest;

class GetVpcLinksRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetVpcLinksRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetVpcLinksRequest * const q);
    GetVpcLinksRequestPrivate(const GetVpcLinksRequestPrivate &other,
                                   GetVpcLinksRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVpcLinksRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
