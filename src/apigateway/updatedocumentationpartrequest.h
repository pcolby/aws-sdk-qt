// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONPARTREQUEST_H
#define QTAWS_UPDATEDOCUMENTATIONPARTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationPartRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateDocumentationPartRequest : public ApiGatewayRequest {

public:
    UpdateDocumentationPartRequest(const UpdateDocumentationPartRequest &other);
    UpdateDocumentationPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
