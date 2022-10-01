// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONREQUEST_H
#define QTAWS_CREATEINTEGRATIONREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateIntegrationRequest : public ApiGatewayV2Request {

public:
    CreateIntegrationRequest(const CreateIntegrationRequest &other);
    CreateIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIntegrationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
