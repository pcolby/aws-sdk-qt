// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONREQUEST_P_H
#define QTAWS_GETCONNECTIONREQUEST_P_H

#include "apigatewaymanagementrequest_p.h"
#include "getconnectionrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class GetConnectionRequest;

class GetConnectionRequestPrivate : public ApiGatewayManagementRequestPrivate {

public:
    GetConnectionRequestPrivate(const ApiGatewayManagementRequest::Action action,
                                   GetConnectionRequest * const q);
    GetConnectionRequestPrivate(const GetConnectionRequestPrivate &other,
                                   GetConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectionRequest)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
