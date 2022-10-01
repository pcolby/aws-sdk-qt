// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKREQUEST_P_H
#define QTAWS_GETSDKREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getsdkrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkRequest;

class GetSdkRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetSdkRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetSdkRequest * const q);
    GetSdkRequestPrivate(const GetSdkRequestPrivate &other,
                                   GetSdkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSdkRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
