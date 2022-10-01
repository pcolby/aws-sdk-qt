// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGEREQUEST_P_H
#define QTAWS_DELETESTAGEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletestagerequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteStageRequest;

class DeleteStageRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteStageRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteStageRequest * const q);
    DeleteStageRequestPrivate(const DeleteStageRequestPrivate &other,
                                   DeleteStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStageRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
