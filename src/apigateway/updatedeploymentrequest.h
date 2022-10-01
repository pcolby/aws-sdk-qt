// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTREQUEST_H
#define QTAWS_UPDATEDEPLOYMENTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDeploymentRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateDeploymentRequest : public ApiGatewayRequest {

public:
    UpdateDeploymentRequest(const UpdateDeploymentRequest &other);
    UpdateDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeploymentRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
