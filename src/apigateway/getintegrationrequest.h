// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONREQUEST_H
#define QTAWS_GETINTEGRATIONREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetIntegrationRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetIntegrationRequest : public ApiGatewayRequest {

public:
    GetIntegrationRequest(const GetIntegrationRequest &other);
    GetIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
