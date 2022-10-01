// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESTAPIREQUEST_P_H
#define QTAWS_UPDATERESTAPIREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updaterestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRestApiRequest;

class UpdateRestApiRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateRestApiRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateRestApiRequest * const q);
    UpdateRestApiRequestPrivate(const UpdateRestApiRequestPrivate &other,
                                   UpdateRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
