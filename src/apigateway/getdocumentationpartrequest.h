// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTREQUEST_H
#define QTAWS_GETDOCUMENTATIONPARTREQUEST_H

#include "apigatewayrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartRequestPrivate;

class QTAWSAPIGATEWAY_EXPORT GetDocumentationPartRequest : public ApiGatewayRequest {

public:
    GetDocumentationPartRequest(const GetDocumentationPartRequest &other);
    GetDocumentationPartRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentationPartRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
