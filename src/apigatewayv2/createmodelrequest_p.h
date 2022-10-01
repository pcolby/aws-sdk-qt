// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELREQUEST_P_H
#define QTAWS_CREATEMODELREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createmodelrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateModelRequest;

class CreateModelRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateModelRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateModelRequest * const q);
    CreateModelRequestPrivate(const CreateModelRequestPrivate &other,
                                   CreateModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateModelRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
