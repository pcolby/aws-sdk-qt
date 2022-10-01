// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSESREQUEST_H
#define QTAWS_GETGATEWAYRESPONSESREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponsesRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetGatewayResponsesRequest : public ApiGatewayRequest {

public:
    GetGatewayResponsesRequest(const GetGatewayResponsesRequest &other);
    GetGatewayResponsesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGatewayResponsesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
