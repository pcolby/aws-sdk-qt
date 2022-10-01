// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSESREQUEST_H
#define QTAWS_GETROUTERESPONSESREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponsesRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRouteResponsesRequest : public ApiGatewayV2Request {

public:
    GetRouteResponsesRequest(const GetRouteResponsesRequest &other);
    GetRouteResponsesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteResponsesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
