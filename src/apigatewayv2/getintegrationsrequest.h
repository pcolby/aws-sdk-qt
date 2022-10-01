// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONSREQUEST_H
#define QTAWS_GETINTEGRATIONSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetIntegrationsRequest : public ApiGatewayV2Request {

public:
    GetIntegrationsRequest(const GetIntegrationsRequest &other);
    GetIntegrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
