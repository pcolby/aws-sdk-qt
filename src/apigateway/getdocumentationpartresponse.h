// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTRESPONSE_H
#define QTAWS_GETDOCUMENTATIONPARTRESPONSE_H

#include "apigatewayresponse.h"
#include "getdocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetDocumentationPartResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetDocumentationPartResponse(const GetDocumentationPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentationPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentationPartResponse)
    Q_DISABLE_COPY(GetDocumentationPartResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
