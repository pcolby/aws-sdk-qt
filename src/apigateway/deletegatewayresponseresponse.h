// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYRESPONSERESPONSE_H
#define QTAWS_DELETEGATEWAYRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "deletegatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteGatewayResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT DeleteGatewayResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    DeleteGatewayResponseResponse(const DeleteGatewayResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGatewayResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayResponseResponse)
    Q_DISABLE_COPY(DeleteGatewayResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
