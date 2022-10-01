// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTOCONNECTIONREQUEST_P_H
#define QTAWS_POSTTOCONNECTIONREQUEST_P_H

#include "apigatewaymanagementrequest_p.h"
#include "posttoconnectionrequest.h"

namespace QtAws {
namespace ApiGatewayManagement {

class PostToConnectionRequest;

class PostToConnectionRequestPrivate : public ApiGatewayManagementRequestPrivate {

public:
    PostToConnectionRequestPrivate(const ApiGatewayManagementRequest::Action action,
                                   PostToConnectionRequest * const q);
    PostToConnectionRequestPrivate(const PostToConnectionRequestPrivate &other,
                                   PostToConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PostToConnectionRequest)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
