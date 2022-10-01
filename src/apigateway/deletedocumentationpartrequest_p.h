// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONPARTREQUEST_P_H
#define QTAWS_DELETEDOCUMENTATIONPARTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletedocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationPartRequest;

class DeleteDocumentationPartRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteDocumentationPartRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteDocumentationPartRequest * const q);
    DeleteDocumentationPartRequestPrivate(const DeleteDocumentationPartRequestPrivate &other,
                                   DeleteDocumentationPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
