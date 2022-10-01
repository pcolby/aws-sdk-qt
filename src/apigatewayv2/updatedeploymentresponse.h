// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTRESPONSE_H
#define QTAWS_UPDATEDEPLOYMENTRESPONSE_H

#include "apigatewayv2response.h"
#include "updatedeploymentrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDeploymentResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateDeploymentResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    UpdateDeploymentResponse(const UpdateDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeploymentResponse)
    Q_DISABLE_COPY(UpdateDeploymentResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
