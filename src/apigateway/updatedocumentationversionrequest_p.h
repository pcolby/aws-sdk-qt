// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONVERSIONREQUEST_P_H
#define QTAWS_UPDATEDOCUMENTATIONVERSIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatedocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationVersionRequest;

class UpdateDocumentationVersionRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateDocumentationVersionRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateDocumentationVersionRequest * const q);
    UpdateDocumentationVersionRequestPrivate(const UpdateDocumentationVersionRequestPrivate &other,
                                   UpdateDocumentationVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDocumentationVersionRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
