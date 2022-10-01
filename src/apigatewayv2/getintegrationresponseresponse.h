// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_GETINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "getintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetIntegrationResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetIntegrationResponseResponse(const GetIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationResponseResponse)
    Q_DISABLE_COPY(GetIntegrationResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
