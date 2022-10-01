// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_CREATEINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "createintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateIntegrationResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateIntegrationResponseResponse(const CreateIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationResponseResponse)
    Q_DISABLE_COPY(CreateIntegrationResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
