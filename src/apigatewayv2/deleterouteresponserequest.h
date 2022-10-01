// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSEREQUEST_H
#define QTAWS_DELETEROUTERESPONSEREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteResponseRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteRouteResponseRequest : public ApiGatewayV2Request {

public:
    DeleteRouteResponseRequest(const DeleteRouteResponseRequest &other);
    DeleteRouteResponseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
