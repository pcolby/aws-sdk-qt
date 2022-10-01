// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINNAMEREQUEST_P_H
#define QTAWS_UPDATEDOMAINNAMEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updatedomainnamerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDomainNameRequest;

class UpdateDomainNameRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateDomainNameRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateDomainNameRequest * const q);
    UpdateDomainNameRequestPrivate(const UpdateDomainNameRequestPrivate &other,
                                   UpdateDomainNameRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainNameRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
