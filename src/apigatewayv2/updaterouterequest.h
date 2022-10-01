// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTEREQUEST_H
#define QTAWS_UPDATEROUTEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateRouteRequest : public ApiGatewayV2Request {

public:
    UpdateRouteRequest(const UpdateRouteRequest &other);
    UpdateRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
