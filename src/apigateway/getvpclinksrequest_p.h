// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKSREQUEST_P_H
#define QTAWS_GETVPCLINKSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getvpclinksrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetVpcLinksRequest;

class GetVpcLinksRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetVpcLinksRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetVpcLinksRequest * const q);
    GetVpcLinksRequestPrivate(const GetVpcLinksRequestPrivate &other,
                                   GetVpcLinksRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVpcLinksRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
