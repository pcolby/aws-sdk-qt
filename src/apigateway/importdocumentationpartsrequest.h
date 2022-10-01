// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTDOCUMENTATIONPARTSREQUEST_H
#define QTAWS_IMPORTDOCUMENTATIONPARTSREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportDocumentationPartsRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT ImportDocumentationPartsRequest : public ApiGatewayRequest {

public:
    ImportDocumentationPartsRequest(const ImportDocumentationPartsRequest &other);
    ImportDocumentationPartsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportDocumentationPartsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
