// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBASEPATHMAPPINGREQUEST_P_H
#define QTAWS_CREATEBASEPATHMAPPINGREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createbasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateBasePathMappingRequest;

class CreateBasePathMappingRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateBasePathMappingRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateBasePathMappingRequest * const q);
    CreateBasePathMappingRequestPrivate(const CreateBasePathMappingRequestPrivate &other,
                                   CreateBasePathMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
