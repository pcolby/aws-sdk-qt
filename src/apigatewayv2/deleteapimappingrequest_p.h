// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIMAPPINGREQUEST_P_H
#define QTAWS_DELETEAPIMAPPINGREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteapimappingrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiMappingRequest;

class DeleteApiMappingRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteApiMappingRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteApiMappingRequest * const q);
    DeleteApiMappingRequestPrivate(const DeleteApiMappingRequestPrivate &other,
                                   DeleteApiMappingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApiMappingRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
