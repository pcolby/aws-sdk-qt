// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSE_H
#define QTAWS_GETINTEGRATIONRESPONSE_H

#include "apigatewayresponse.h"
#include "getintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetIntegrationResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetIntegrationResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetIntegrationResponse(const GetIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationResponse)
    Q_DISABLE_COPY(GetIntegrationResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
