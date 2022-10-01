// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTRESPONSE_H
#define QTAWS_UPDATEDEPLOYMENTRESPONSE_H

#include "apigatewayresponse.h"
#include "updatedeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDeploymentResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateDeploymentResponse : public ApiGatewayResponse {
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

} // namespace ApiGateway
} // namespace QtAws

#endif
