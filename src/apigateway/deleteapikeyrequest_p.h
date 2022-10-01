// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIKEYREQUEST_P_H
#define QTAWS_DELETEAPIKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleteapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteApiKeyRequest;

class DeleteApiKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteApiKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteApiKeyRequest * const q);
    DeleteApiKeyRequestPrivate(const DeleteApiKeyRequestPrivate &other,
                                   DeleteApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
