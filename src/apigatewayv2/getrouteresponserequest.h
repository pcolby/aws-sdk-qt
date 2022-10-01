// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSEREQUEST_H
#define QTAWS_GETROUTERESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRouteResponseRequest : public ApiGatewayV2Request {

public:
    GetRouteResponseRequest(const GetRouteResponseRequest &other);
    GetRouteResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
