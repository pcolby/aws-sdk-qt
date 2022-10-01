// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTREQUEST_H
#define QTAWS_CREATEDEPLOYMENTREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateDeploymentRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateDeploymentRequest : public ApiGatewayV2Request {

public:
    CreateDeploymentRequest(const CreateDeploymentRequest &other);
    CreateDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
