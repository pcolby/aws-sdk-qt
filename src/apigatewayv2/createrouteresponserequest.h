// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSEREQUEST_H
#define QTAWS_CREATEROUTERESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT CreateRouteResponseRequest : public ApiGatewayV2Request {

public:
    CreateRouteResponseRequest(const CreateRouteResponseRequest &other);
    CreateRouteResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
