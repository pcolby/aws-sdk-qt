// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYRESPONSERESPONSE_H
#define QTAWS_UPDATEGATEWAYRESPONSERESPONSE_H

#include "apigatewayresponse.h"
#include "updategatewayresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateGatewayResponseResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateGatewayResponseResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateGatewayResponseResponse(const UpdateGatewayResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewayResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayResponseResponse)
    Q_DISABLE_COPY(UpdateGatewayResponseResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
