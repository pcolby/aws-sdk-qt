// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGEAUTHORIZERSCACHERESPONSE_P_H
#define QTAWS_FLUSHSTAGEAUTHORIZERSCACHERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageAuthorizersCacheResponse;

class FlushStageAuthorizersCacheResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit FlushStageAuthorizersCacheResponsePrivate(FlushStageAuthorizersCacheResponse * const q);

    void parseFlushStageAuthorizersCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FlushStageAuthorizersCacheResponse)
    Q_DISABLE_COPY(FlushStageAuthorizersCacheResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
