// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIREQUEST_P_H
#define QTAWS_CREATEAPIREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createapirequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiRequest;

class CreateApiRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateApiRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateApiRequest * const q);
    CreateApiRequestPrivate(const CreateApiRequestPrivate &other,
                                   CreateApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
