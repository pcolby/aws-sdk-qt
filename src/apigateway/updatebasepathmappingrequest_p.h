// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBASEPATHMAPPINGREQUEST_P_H
#define QTAWS_UPDATEBASEPATHMAPPINGREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatebasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateBasePathMappingRequest;

class UpdateBasePathMappingRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateBasePathMappingRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateBasePathMappingRequest * const q);
    UpdateBasePathMappingRequestPrivate(const UpdateBasePathMappingRequestPrivate &other,
                                   UpdateBasePathMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
