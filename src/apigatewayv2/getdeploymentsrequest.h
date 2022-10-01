// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSREQUEST_H
#define QTAWS_GETDEPLOYMENTSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetDeploymentsRequest : public ApiGatewayV2Request {

public:
    GetDeploymentsRequest(const GetDeploymentsRequest &other);
    GetDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
