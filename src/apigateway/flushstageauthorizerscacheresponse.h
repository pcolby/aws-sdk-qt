// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHSTAGEAUTHORIZERSCACHERESPONSE_H
#define QTAWS_FLUSHSTAGEAUTHORIZERSCACHERESPONSE_H

#include "apigatewayresponse.h"
#include "flushstageauthorizerscacherequest.h"

namespace QtAws {
namespace ApiGateway {

class FlushStageAuthorizersCacheResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT FlushStageAuthorizersCacheResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    FlushStageAuthorizersCacheResponse(const FlushStageAuthorizersCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const FlushStageAuthorizersCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FlushStageAuthorizersCacheResponse)
    Q_DISABLE_COPY(FlushStageAuthorizersCacheResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
