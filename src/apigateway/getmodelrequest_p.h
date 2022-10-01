// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELREQUEST_P_H
#define QTAWS_GETMODELREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getmodelrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetModelRequest;

class GetModelRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetModelRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetModelRequest * const q);
    GetModelRequestPrivate(const GetModelRequestPrivate &other,
                                   GetModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
