// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONPARTRESPONSE_H
#define QTAWS_DELETEDOCUMENTATIONPARTRESPONSE_H

#include "apigatewayresponse.h"
#include "deletedocumentationpartrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationPartResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteDocumentationPartResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteDocumentationPartResponse(const DeleteDocumentationPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDocumentationPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentationPartResponse)
    Q_DISABLE_COPY(DeleteDocumentationPartResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
