// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONREQUEST_H
#define QTAWS_UPDATEINTEGRATIONREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateIntegrationRequest : public ApiGatewayRequest {

public:
    UpdateIntegrationRequest(const UpdateIntegrationRequest &other);
    UpdateIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
