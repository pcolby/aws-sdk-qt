// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGEAUTHORIZERSCACHEREQUEST_P_H
#define QTAWS_FLUSHSTAGEAUTHORIZERSCACHEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "flushstageauthorizerscacherequest.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageAuthorizersCacheRequest;

class FlushStageAuthorizersCacheRequestPrivate : public ApiGatewayRequestPrivate {

public:
    FlushStageAuthorizersCacheRequestPrivate(const ApiGatewayRequest::Action action,
                                   FlushStageAuthorizersCacheRequest * const q);
    FlushStageAuthorizersCacheRequestPrivate(const FlushStageAuthorizersCacheRequestPrivate &other,
                                   FlushStageAuthorizersCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(FlushStageAuthorizersCacheRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
