// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONVERSIONREQUEST_P_H
#define QTAWS_DELETEDOCUMENTATIONVERSIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletedocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationVersionRequest;

class DeleteDocumentationVersionRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteDocumentationVersionRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteDocumentationVersionRequest * const q);
    DeleteDocumentationVersionRequestPrivate(const DeleteDocumentationVersionRequestPrivate &other,
                                   DeleteDocumentationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
