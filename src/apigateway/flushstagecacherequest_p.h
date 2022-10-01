// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGECACHEREQUEST_P_H
#define QTAWS_FLUSHSTAGECACHEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "flushstagecacherequest.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageCacheRequest;

class FlushStageCacheRequestPrivate : public ApiGatewayRequestPrivate {

public:
    FlushStageCacheRequestPrivate(const ApiGatewayRequest::Action action,
                                   FlushStageCacheRequest * const q);
    FlushStageCacheRequestPrivate(const FlushStageCacheRequestPrivate &other,
                                   FlushStageCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(FlushStageCacheRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
