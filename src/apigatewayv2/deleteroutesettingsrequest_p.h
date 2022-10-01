// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTESETTINGSREQUEST_P_H
#define QTAWS_DELETEROUTESETTINGSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteroutesettingsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteSettingsRequest;

class DeleteRouteSettingsRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteRouteSettingsRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteRouteSettingsRequest * const q);
    DeleteRouteSettingsRequestPrivate(const DeleteRouteSettingsRequestPrivate &other,
                                   DeleteRouteSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteSettingsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
