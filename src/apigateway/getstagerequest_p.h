// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEREQUEST_P_H
#define QTAWS_GETSTAGEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getstagerequest.h"

namespace QtAws {
namespace ApiGateway {

class GetStageRequest;

class GetStageRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetStageRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetStageRequest * const q);
    GetStageRequestPrivate(const GetStageRequestPrivate &other,
                                   GetStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
