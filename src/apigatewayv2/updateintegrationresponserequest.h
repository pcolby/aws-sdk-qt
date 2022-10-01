// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_H
#define QTAWS_UPDATEINTEGRATIONRESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateIntegrationResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateIntegrationResponseRequest : public ApiGatewayV2Request {

public:
    UpdateIntegrationResponseRequest(const UpdateIntegrationResponseRequest &other);
    UpdateIntegrationResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
