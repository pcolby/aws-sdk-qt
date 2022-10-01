// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTRESPONSE_H
#define QTAWS_DELETEDEPLOYMENTRESPONSE_H

#include "apigatewayv2response.h"
#include "deletedeploymentrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteDeploymentResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteDeploymentResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteDeploymentResponse(const DeleteDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentResponse)
    Q_DISABLE_COPY(DeleteDeploymentResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
