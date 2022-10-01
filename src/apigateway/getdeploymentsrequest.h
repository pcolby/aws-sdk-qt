// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSREQUEST_H
#define QTAWS_GETDEPLOYMENTSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDeploymentsRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetDeploymentsRequest : public ApiGatewayRequest {

public:
    GetDeploymentsRequest(const GetDeploymentsRequest &other);
    GetDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
