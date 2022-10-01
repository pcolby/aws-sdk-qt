// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGSREQUEST_P_H
#define QTAWS_GETAPIMAPPINGSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getapimappingsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingsRequest;

class GetApiMappingsRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetApiMappingsRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetApiMappingsRequest * const q);
    GetApiMappingsRequestPrivate(const GetApiMappingsRequestPrivate &other,
                                   GetApiMappingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiMappingsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
