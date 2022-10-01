// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETAUTHORIZERSCACHEREQUEST_P_H
#define QTAWS_RESETAUTHORIZERSCACHEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "resetauthorizerscacherequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ResetAuthorizersCacheRequest;

class ResetAuthorizersCacheRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    ResetAuthorizersCacheRequestPrivate(const ApiGatewayV2Request::Action action,
                                   ResetAuthorizersCacheRequest * const q);
    ResetAuthorizersCacheRequestPrivate(const ResetAuthorizersCacheRequestPrivate &other,
                                   ResetAuthorizersCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetAuthorizersCacheRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
