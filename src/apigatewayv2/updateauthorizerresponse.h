// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERRESPONSE_H
#define QTAWS_UPDATEAUTHORIZERRESPONSE_H

#include "apigatewayv2response.h"
#include "updateauthorizerrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateAuthorizerResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT UpdateAuthorizerResponse : public ApiGatewayV2Response {
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

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
