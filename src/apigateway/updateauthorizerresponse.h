// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERRESPONSE_H
#define QTAWS_UPDATEAUTHORIZERRESPONSE_H

#include "apigatewayresponse.h"
#include "updateauthorizerrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateAuthorizerResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT UpdateAuthorizerResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    UpdateAuthorizerResponse(const UpdateAuthorizerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAuthorizerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuthorizerResponse)
    Q_DISABLE_COPY(UpdateAuthorizerResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
