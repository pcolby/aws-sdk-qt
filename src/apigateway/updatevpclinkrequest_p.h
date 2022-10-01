// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCLINKREQUEST_P_H
#define QTAWS_UPDATEVPCLINKREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatevpclinkrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateVpcLinkRequest;

class UpdateVpcLinkRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateVpcLinkRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateVpcLinkRequest * const q);
    UpdateVpcLinkRequestPrivate(const UpdateVpcLinkRequestPrivate &other,
                                   UpdateVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVpcLinkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
