// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONVERSIONSRESPONSE_H
#define QTAWS_GETDOCUMENTATIONVERSIONSRESPONSE_H

#include "apigatewayresponse.h"
#include "getdocumentationversionsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationVersionsResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetDocumentationVersionsResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetDocumentationVersionsResponse(const GetDocumentationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentationVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentationVersionsResponse)
    Q_DISABLE_COPY(GetDocumentationVersionsResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
