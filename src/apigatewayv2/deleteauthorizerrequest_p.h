// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHORIZERREQUEST_P_H
#define QTAWS_DELETEAUTHORIZERREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteauthorizerrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAuthorizerRequest;

class DeleteAuthorizerRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteAuthorizerRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteAuthorizerRequest * const q);
    DeleteAuthorizerRequestPrivate(const DeleteAuthorizerRequestPrivate &other,
                                   DeleteAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
