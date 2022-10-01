// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETECORSCONFIGURATIONREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deletecorsconfigurationrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteCorsConfigurationRequest;

class DeleteCorsConfigurationRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteCorsConfigurationRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteCorsConfigurationRequest * const q);
    DeleteCorsConfigurationRequestPrivate(const DeleteCorsConfigurationRequestPrivate &other,
                                   DeleteCorsConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCorsConfigurationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
