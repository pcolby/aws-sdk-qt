// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGECACHERESPONSE_P_H
#define QTAWS_FLUSHSTAGECACHERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageCacheResponse;

class FlushStageCacheResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit FlushStageCacheResponsePrivate(FlushStageCacheResponse * const q);

    void parseFlushStageCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FlushStageCacheResponse)
    Q_DISABLE_COPY(FlushStageCacheResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
