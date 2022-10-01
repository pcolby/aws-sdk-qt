// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCLINKREQUEST_P_H
#define QTAWS_CREATEVPCLINKREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createvpclinkrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateVpcLinkRequest;

class CreateVpcLinkRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateVpcLinkRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateVpcLinkRequest * const q);
    CreateVpcLinkRequestPrivate(const CreateVpcLinkRequestPrivate &other,
                                   CreateVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
