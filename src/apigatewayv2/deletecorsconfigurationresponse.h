// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSCONFIGURATIONRESPONSE_H
#define QTAWS_DELETECORSCONFIGURATIONRESPONSE_H

#include "apigatewayv2response.h"
#include "deletecorsconfigurationrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteCorsConfigurationResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT DeleteCorsConfigurationResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    DeleteCorsConfigurationResponse(const DeleteCorsConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCorsConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCorsConfigurationResponse)
    Q_DISABLE_COPY(DeleteCorsConfigurationResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
