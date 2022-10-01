// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIREQUEST_P_H
#define QTAWS_GETAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiRequest;

class GetApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetApiRequest * const q);
    GetApiRequestPrivate(const GetApiRequestPrivate &other,
                                   GetApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
