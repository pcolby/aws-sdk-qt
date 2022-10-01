// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTATIONVERSIONRESPONSE_H
#define QTAWS_UPDATEDOCUMENTATIONVERSIONRESPONSE_H

#include "apigatewayresponse.h"
#include "updatedocumentationversionrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDocumentationVersionResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateDocumentationVersionResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateDocumentationVersionResponse(const UpdateDocumentationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentationVersionResponse)
    Q_DISABLE_COPY(UpdateDocumentationVersionResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
