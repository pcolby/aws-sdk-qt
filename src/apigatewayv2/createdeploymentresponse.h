// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTRESPONSE_H

#include "apigatewayv2response.h"
#include "createdeploymentrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateDeploymentResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateDeploymentResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    CreateDeploymentResponse(const CreateDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentResponse)
    Q_DISABLE_COPY(CreateDeploymentResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
