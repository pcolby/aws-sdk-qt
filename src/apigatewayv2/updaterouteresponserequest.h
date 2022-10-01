// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSEREQUEST_H
#define QTAWS_UPDATEROUTERESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateRouteResponseRequest : public ApiGatewayV2Request {

public:
    UpdateRouteResponseRequest(const UpdateRouteResponseRequest &other);
    UpdateRouteResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
