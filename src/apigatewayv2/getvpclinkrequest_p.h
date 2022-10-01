// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKREQUEST_P_H
#define QTAWS_GETVPCLINKREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getvpclinkrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinkRequest;

class GetVpcLinkRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetVpcLinkRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetVpcLinkRequest * const q);
    GetVpcLinkRequestPrivate(const GetVpcLinkRequestPrivate &other,
                                   GetVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
