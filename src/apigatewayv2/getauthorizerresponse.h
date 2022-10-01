// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERRESPONSE_H
#define QTAWS_GETAUTHORIZERRESPONSE_H

#include "apigatewayv2response.h"
#include "getauthorizerrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetAuthorizerResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetAuthorizerResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetAuthorizerResponse(const GetAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAuthorizerResponse)
    Q_DISABLE_COPY(GetAuthorizerResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
