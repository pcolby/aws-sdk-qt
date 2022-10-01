// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_H
#define QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationResponseRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateIntegrationResponseRequest : public ApiGatewayRequest {

public:
    UpdateIntegrationResponseRequest(const UpdateIntegrationResponseRequest &other);
    UpdateIntegrationResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntegrationResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
