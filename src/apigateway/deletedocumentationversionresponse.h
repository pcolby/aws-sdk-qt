// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTATIONVERSIONRESPONSE_H
#define QTAWS_DELETEDOCUMENTATIONVERSIONRESPONSE_H

#include "apigatewayresponse.h"
#include "deletedocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDocumentationVersionResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteDocumentationVersionResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteDocumentationVersionResponse(const DeleteDocumentationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDocumentationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentationVersionResponse)
    Q_DISABLE_COPY(DeleteDocumentationVersionResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
