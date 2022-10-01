// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTREQUEST_H
#define QTAWS_GETDEPLOYMENTREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetDeploymentRequest : public ApiGatewayV2Request {

public:
    GetDeploymentRequest(const GetDeploymentRequest &other);
    GetDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
