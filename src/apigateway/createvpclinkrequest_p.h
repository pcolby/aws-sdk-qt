// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCLINKREQUEST_P_H
#define QTAWS_CREATEVPCLINKREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createvpclinkrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateVpcLinkRequest;

class CreateVpcLinkRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateVpcLinkRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateVpcLinkRequest * const q);
    CreateVpcLinkRequestPrivate(const CreateVpcLinkRequestPrivate &other,
                                   CreateVpcLinkRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcLinkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
