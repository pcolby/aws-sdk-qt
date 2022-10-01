// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOCUMENTATIONVERSIONRESPONSE_H
#define QTAWS_CREATEDOCUMENTATIONVERSIONRESPONSE_H

#include "apigatewayresponse.h"
#include "createdocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDocumentationVersionResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT CreateDocumentationVersionResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    CreateDocumentationVersionResponse(const CreateDocumentationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDocumentationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDocumentationVersionResponse)
    Q_DISABLE_COPY(CreateDocumentationVersionResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
