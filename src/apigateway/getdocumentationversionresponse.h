// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONRESPONSE_H
#define QTAWS_GETDOCUMENTATIONVERSIONRESPONSE_H

#include "apigatewayresponse.h"
#include "getdocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetDocumentationVersionResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetDocumentationVersionResponse(const GetDocumentationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentationVersionResponse)
    Q_DISABLE_COPY(GetDocumentationVersionResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
