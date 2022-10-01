// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTDOCUMENTATIONPARTSREQUEST_P_H
#define QTAWS_IMPORTDOCUMENTATIONPARTSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "importdocumentationpartsrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportDocumentationPartsRequest;

class ImportDocumentationPartsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    ImportDocumentationPartsRequestPrivate(const ApiGatewayRequest::Action action,
                                   ImportDocumentationPartsRequest * const q);
    ImportDocumentationPartsRequestPrivate(const ImportDocumentationPartsRequestPrivate &other,
                                   ImportDocumentationPartsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportDocumentationPartsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
