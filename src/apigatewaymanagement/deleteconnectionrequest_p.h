// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONREQUEST_P_H
#define QTAWS_DELETECONNECTIONREQUEST_P_H

#include "apigatewaymanagementrequest_p.h"
#include "deleteconnectionrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class DeleteConnectionRequest;

class DeleteConnectionRequestPrivate : public ApiGatewayManagementRequestPrivate {

public:
    DeleteConnectionRequestPrivate(const ApiGatewayManagementRequest::Action action,
                                   DeleteConnectionRequest * const q);
    DeleteConnectionRequestPrivate(const DeleteConnectionRequestPrivate &other,
                                   DeleteConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectionRequest)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
