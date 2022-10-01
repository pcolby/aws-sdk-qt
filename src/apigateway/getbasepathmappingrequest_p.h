// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGREQUEST_P_H
#define QTAWS_GETBASEPATHMAPPINGREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getbasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingRequest;

class GetBasePathMappingRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetBasePathMappingRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetBasePathMappingRequest * const q);
    GetBasePathMappingRequestPrivate(const GetBasePathMappingRequestPrivate &other,
                                   GetBasePathMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
