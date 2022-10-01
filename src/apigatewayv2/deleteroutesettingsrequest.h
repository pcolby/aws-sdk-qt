// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTESETTINGSREQUEST_H
#define QTAWS_DELETEROUTESETTINGSREQUEST_H

#include "apigatewayv2request.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteSettingsRequestPrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteRouteSettingsRequest : public ApiGatewayV2Request {

public:
    DeleteRouteSettingsRequest(const DeleteRouteSettingsRequest &other);
    DeleteRouteSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteSettingsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
