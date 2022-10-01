// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBASEPATHMAPPINGREQUEST_P_H
#define QTAWS_DELETEBASEPATHMAPPINGREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletebasepathmappingrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteBasePathMappingRequest;

class DeleteBasePathMappingRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteBasePathMappingRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteBasePathMappingRequest * const q);
    DeleteBasePathMappingRequestPrivate(const DeleteBasePathMappingRequestPrivate &other,
                                   DeleteBasePathMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBasePathMappingRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
