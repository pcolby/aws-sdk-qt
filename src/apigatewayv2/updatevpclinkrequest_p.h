// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCLINKREQUEST_P_H
#define QTAWS_UPDATEVPCLINKREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updatevpclinkrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateVpcLinkRequest;

class UpdateVpcLinkRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateVpcLinkRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateVpcLinkRequest * const q);
    UpdateVpcLinkRequestPrivate(const UpdateVpcLinkRequestPrivate &other,
                                   UpdateVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
