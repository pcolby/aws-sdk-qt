// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESTAPIREQUEST_P_H
#define QTAWS_DELETERESTAPIREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleterestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRestApiRequest;

class DeleteRestApiRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteRestApiRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteRestApiRequest * const q);
    DeleteRestApiRequestPrivate(const DeleteRestApiRequestPrivate &other,
                                   DeleteRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
