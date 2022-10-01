// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSESRESPONSE_H
#define QTAWS_GETINTEGRATIONRESPONSESRESPONSE_H

#include "apigatewayv2response.h"
#include "getintegrationresponsesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponsesResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetIntegrationResponsesResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetIntegrationResponsesResponse(const GetIntegrationResponsesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntegrationResponsesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationResponsesResponse)
    Q_DISABLE_COPY(GetIntegrationResponsesResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
