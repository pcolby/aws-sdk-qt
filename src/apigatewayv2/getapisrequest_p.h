// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPISREQUEST_P_H
#define QTAWS_GETAPISREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getapisrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApisRequest;

class GetApisRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetApisRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetApisRequest * const q);
    GetApisRequestPrivate(const GetApisRequestPrivate &other,
                                   GetApisRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApisRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
