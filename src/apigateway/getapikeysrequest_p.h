// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYSREQUEST_P_H
#define QTAWS_GETAPIKEYSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getapikeysrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeysRequest;

class GetApiKeysRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetApiKeysRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetApiKeysRequest * const q);
    GetApiKeysRequestPrivate(const GetApiKeysRequestPrivate &other,
                                   GetApiKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiKeysRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
