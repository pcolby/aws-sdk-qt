// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTDOCUMENTATIONPARTSRESPONSE_H
#define QTAWS_IMPORTDOCUMENTATIONPARTSRESPONSE_H

#include "apigatewayresponse.h"
#include "importdocumentationpartsrequest.h"

namespace QtAws {
namespace ApiGateway {

class ImportDocumentationPartsResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT ImportDocumentationPartsResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    ImportDocumentationPartsResponse(const ImportDocumentationPartsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportDocumentationPartsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportDocumentationPartsResponse)
    Q_DISABLE_COPY(ImportDocumentationPartsResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
