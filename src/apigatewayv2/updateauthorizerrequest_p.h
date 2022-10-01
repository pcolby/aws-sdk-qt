// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERREQUEST_P_H
#define QTAWS_UPDATEAUTHORIZERREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updateauthorizerrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateAuthorizerRequest;

class UpdateAuthorizerRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateAuthorizerRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateAuthorizerRequest * const q);
    UpdateAuthorizerRequestPrivate(const UpdateAuthorizerRequestPrivate &other,
                                   UpdateAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
