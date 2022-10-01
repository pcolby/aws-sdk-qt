// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSEREQUEST_H
#define QTAWS_PUTINTEGRATIONRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT PutIntegrationResponseRequest : public ApiGatewayRequest {

public:
    PutIntegrationResponseRequest(const PutIntegrationResponseRequest &other);
    PutIntegrationResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIntegrationResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
