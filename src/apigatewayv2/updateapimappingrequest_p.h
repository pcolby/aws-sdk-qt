// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIMAPPINGREQUEST_P_H
#define QTAWS_UPDATEAPIMAPPINGREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updateapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiMappingRequest;

class UpdateApiMappingRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateApiMappingRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateApiMappingRequest * const q);
    UpdateApiMappingRequestPrivate(const UpdateApiMappingRequestPrivate &other,
                                   UpdateApiMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
