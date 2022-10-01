// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSESREQUEST_H
#define QTAWS_GETINTEGRATIONRESPONSESREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponsesRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetIntegrationResponsesRequest : public ApiGatewayV2Request {

public:
    GetIntegrationResponsesRequest(const GetIntegrationResponsesRequest &other);
    GetIntegrationResponsesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIntegrationResponsesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
