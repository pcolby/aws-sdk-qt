// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETAUTHORIZERSCACHERESPONSE_H
#define QTAWS_RESETAUTHORIZERSCACHERESPONSE_H

#include "apigatewayv2response.h"
#include "resetauthorizerscacherequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ResetAuthorizersCacheResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT ResetAuthorizersCacheResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    ResetAuthorizersCacheResponse(const ResetAuthorizersCacheRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResetAuthorizersCacheRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetAuthorizersCacheResponse)
    Q_DISABLE_COPY(ResetAuthorizersCacheResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
