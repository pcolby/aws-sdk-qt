// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGESREQUEST_P_H
#define QTAWS_GETSTAGESREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getstagesrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetStagesRequest;

class GetStagesRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetStagesRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetStagesRequest * const q);
    GetStagesRequestPrivate(const GetStagesRequestPrivate &other,
                                   GetStagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStagesRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
