// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTATIONPARTSRESPONSE_H
#define QTAWS_GETDOCUMENTATIONPARTSRESPONSE_H

#include "apigatewayresponse.h"
#include "getdocumentationpartsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDocumentationPartsResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetDocumentationPartsResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetDocumentationPartsResponse(const GetDocumentationPartsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDocumentationPartsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentationPartsResponse)
    Q_DISABLE_COPY(GetDocumentationPartsResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
