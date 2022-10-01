// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKREQUEST_P_H
#define QTAWS_DELETEVPCLINKREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deletevpclinkrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteVpcLinkRequest;

class DeleteVpcLinkRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteVpcLinkRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteVpcLinkRequest * const q);
    DeleteVpcLinkRequestPrivate(const DeleteVpcLinkRequestPrivate &other,
                                   DeleteVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcLinkRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
