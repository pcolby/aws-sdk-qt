// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIKEYREQUEST_P_H
#define QTAWS_CREATEAPIKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateApiKeyRequest;

class CreateApiKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateApiKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateApiKeyRequest * const q);
    CreateApiKeyRequestPrivate(const CreateApiKeyRequestPrivate &other,
                                   CreateApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
