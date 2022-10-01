// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGSREQUEST_P_H
#define QTAWS_GETBASEPATHMAPPINGSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getbasepathmappingsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingsRequest;

class GetBasePathMappingsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetBasePathMappingsRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetBasePathMappingsRequest * const q);
    GetBasePathMappingsRequestPrivate(const GetBasePathMappingsRequestPrivate &other,
                                   GetBasePathMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBasePathMappingsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
