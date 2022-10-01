// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONREQUEST_H
#define QTAWS_PUTINTEGRATIONREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT PutIntegrationRequest : public ApiGatewayRequest {

public:
    PutIntegrationRequest(const PutIntegrationRequest &other);
    PutIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
