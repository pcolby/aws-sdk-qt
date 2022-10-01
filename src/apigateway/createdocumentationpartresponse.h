// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONPARTRESPONSE_H
#define QTAWS_CREATEDOCUMENTATIONPARTRESPONSE_H

#include "apigatewayresponse.h"
#include "createdocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationPartResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateDocumentationPartResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateDocumentationPartResponse(const CreateDocumentationPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDocumentationPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentationPartResponse)
    Q_DISABLE_COPY(CreateDocumentationPartResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
