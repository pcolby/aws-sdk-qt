// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONPARTRESPONSE_H
#define QTAWS_UPDATEDOCUMENTATIONPARTRESPONSE_H

#include "apigatewayresponse.h"
#include "updatedocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationPartResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateDocumentationPartResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateDocumentationPartResponse(const UpdateDocumentationPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentationPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentationPartResponse)
    Q_DISABLE_COPY(UpdateDocumentationPartResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
