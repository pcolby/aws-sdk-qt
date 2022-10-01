// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKREQUEST_P_H
#define QTAWS_DELETEVPCLINKREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletevpclinkrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteVpcLinkRequest;

class DeleteVpcLinkRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteVpcLinkRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteVpcLinkRequest * const q);
    DeleteVpcLinkRequestPrivate(const DeleteVpcLinkRequestPrivate &other,
                                   DeleteVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcLinkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
