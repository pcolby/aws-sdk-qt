// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYREQUEST_P_H
#define QTAWS_GETAPIKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeyRequest;

class GetApiKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetApiKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetApiKeyRequest * const q);
    GetApiKeyRequestPrivate(const GetApiKeyRequestPrivate &other,
                                   GetApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
