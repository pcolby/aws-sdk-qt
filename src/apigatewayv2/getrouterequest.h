// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEREQUEST_H
#define QTAWS_GETROUTEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRouteRequest : public ApiGatewayV2Request {

public:
    GetRouteRequest(const GetRouteRequest &other);
    GetRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
