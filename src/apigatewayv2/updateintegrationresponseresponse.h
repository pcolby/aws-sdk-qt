// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_UPDATEINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayv2response.h"
#include "updateintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateIntegrationResponseResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    UpdateIntegrationResponseResponse(const UpdateIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntegrationResponseResponse)
    Q_DISABLE_COPY(UpdateIntegrationResponseResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
