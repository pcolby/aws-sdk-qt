// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONSRESPONSE_H
#define QTAWS_GETINTEGRATIONSRESPONSE_H

#include "apigatewayv2response.h"
#include "getintegrationsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationsResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetIntegrationsResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetIntegrationsResponse(const GetIntegrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntegrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationsResponse)
    Q_DISABLE_COPY(GetIntegrationsResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
