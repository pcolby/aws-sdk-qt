// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTRESPONSE_H
#define QTAWS_DELETEDEPLOYMENTRESPONSE_H

#include "apigatewayresponse.h"
#include "deletedeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDeploymentResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteDeploymentResponse : public ApiGatewayResponse {
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

} // namespace ApiGateway
} // namespace QtAws

#endif
