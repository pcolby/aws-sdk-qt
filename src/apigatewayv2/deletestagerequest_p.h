// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGEREQUEST_P_H
#define QTAWS_DELETESTAGEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deletestagerequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteStageRequest;

class DeleteStageRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteStageRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteStageRequest * const q);
    DeleteStageRequestPrivate(const DeleteStageRequestPrivate &other,
                                   DeleteStageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStageRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
