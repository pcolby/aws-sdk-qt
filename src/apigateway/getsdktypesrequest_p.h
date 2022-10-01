// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPESREQUEST_P_H
#define QTAWS_GETSDKTYPESREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getsdktypesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypesRequest;

class GetSdkTypesRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetSdkTypesRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetSdkTypesRequest * const q);
    GetSdkTypesRequestPrivate(const GetSdkTypesRequestPrivate &other,
                                   GetSdkTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSdkTypesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
