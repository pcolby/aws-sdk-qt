// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESTAPIREQUEST_P_H
#define QTAWS_PUTRESTAPIREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "putrestapirequest.h"

namespace QtAws {
namespace ApiGateway {

class PutRestApiRequest;

class PutRestApiRequestPrivate : public ApiGatewayRequestPrivate {

public:
    PutRestApiRequestPrivate(const ApiGatewayRequest::Action action,
                                   PutRestApiRequest * const q);
    PutRestApiRequestPrivate(const PutRestApiRequestPrivate &other,
                                   PutRestApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRestApiRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
