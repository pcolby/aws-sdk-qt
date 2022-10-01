// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIMAPPINGREQUEST_P_H
#define QTAWS_CREATEAPIMAPPINGREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "createapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiMappingRequest;

class CreateApiMappingRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    CreateApiMappingRequestPrivate(const ApiGatewayV2Request::Action action,
                                   CreateApiMappingRequest * const q);
    CreateApiMappingRequestPrivate(const CreateApiMappingRequestPrivate &other,
                                   CreateApiMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
