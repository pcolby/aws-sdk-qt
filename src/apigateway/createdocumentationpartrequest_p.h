// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONPARTREQUEST_P_H
#define QTAWS_CREATEDOCUMENTATIONPARTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createdocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationPartRequest;

class CreateDocumentationPartRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateDocumentationPartRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateDocumentationPartRequest * const q);
    CreateDocumentationPartRequestPrivate(const CreateDocumentationPartRequestPrivate &other,
                                   CreateDocumentationPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
