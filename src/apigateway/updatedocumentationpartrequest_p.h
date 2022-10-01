// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONPARTREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTATIONPARTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatedocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationPartRequest;

class UpdateDocumentationPartRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateDocumentationPartRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateDocumentationPartRequest * const q);
    UpdateDocumentationPartRequestPrivate(const UpdateDocumentationPartRequestPrivate &other,
                                   UpdateDocumentationPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
