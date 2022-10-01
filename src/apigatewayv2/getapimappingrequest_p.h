// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGREQUEST_P_H
#define QTAWS_GETAPIMAPPINGREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingRequest;

class GetApiMappingRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetApiMappingRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetApiMappingRequest * const q);
    GetApiMappingRequestPrivate(const GetApiMappingRequestPrivate &other,
                                   GetApiMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
