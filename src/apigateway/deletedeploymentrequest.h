// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTREQUEST_H
#define QTAWS_DELETEDEPLOYMENTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDeploymentRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteDeploymentRequest : public ApiGatewayRequest {

public:
    DeleteDeploymentRequest(const DeleteDeploymentRequest &other);
    DeleteDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
