// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSREQUEST_P_H
#define QTAWS_GETMODELSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getmodelsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetModelsRequest;

class GetModelsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetModelsRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetModelsRequest * const q);
    GetModelsRequestPrivate(const GetModelsRequestPrivate &other,
                                   GetModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetModelsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
