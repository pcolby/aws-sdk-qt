// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONRESPONSE_H
#define QTAWS_CREATEINTEGRATIONRESPONSE_H

#include "apigatewayv2response.h"
#include "createintegrationrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateIntegrationResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateIntegrationResponse(const CreateIntegrationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIntegrationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationResponse)
    Q_DISABLE_COPY(CreateIntegrationResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
