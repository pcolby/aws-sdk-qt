// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSLOGSETTINGSREQUEST_P_H
#define QTAWS_DELETEACCESSLOGSETTINGSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteaccesslogsettingsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAccessLogSettingsRequest;

class DeleteAccessLogSettingsRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteAccessLogSettingsRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteAccessLogSettingsRequest * const q);
    DeleteAccessLogSettingsRequestPrivate(const DeleteAccessLogSettingsRequestPrivate &other,
                                   DeleteAccessLogSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessLogSettingsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
