// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIKEYREQUEST_P_H
#define QTAWS_UPDATEAPIKEYREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updateapikeyrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateApiKeyRequest;

class UpdateApiKeyRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateApiKeyRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateApiKeyRequest * const q);
    UpdateApiKeyRequestPrivate(const UpdateApiKeyRequestPrivate &other,
                                   UpdateApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApiKeyRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
