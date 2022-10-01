// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSERESPONSE_H
#define QTAWS_DELETEINTEGRATIONRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "deleteintegrationresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteIntegrationResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteIntegrationResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteIntegrationResponseResponse(const DeleteIntegrationResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIntegrationResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntegrationResponseResponse)
    Q_DISABLE_COPY(DeleteIntegrationResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
