// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREQUESTVALIDATORREQUEST_P_H
#define QTAWS_DELETEREQUESTVALIDATORREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleterequestvalidatorrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRequestValidatorRequest;

class DeleteRequestValidatorRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteRequestValidatorRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteRequestValidatorRequest * const q);
    DeleteRequestValidatorRequestPrivate(const DeleteRequestValidatorRequestPrivate &other,
                                   DeleteRequestValidatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRequestValidatorRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
