// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEREQUEST_P_H
#define QTAWS_GETSTAGEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getstagerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetStageRequest;

class GetStageRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetStageRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetStageRequest * const q);
    GetStageRequestPrivate(const GetStageRequestPrivate &other,
                                   GetStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStageRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
