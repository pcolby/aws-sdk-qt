// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPEREQUEST_P_H
#define QTAWS_GETSDKTYPEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getsdktyperequest.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypeRequest;

class GetSdkTypeRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetSdkTypeRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetSdkTypeRequest * const q);
    GetSdkTypeRequestPrivate(const GetSdkTypeRequestPrivate &other,
                                   GetSdkTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSdkTypeRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
