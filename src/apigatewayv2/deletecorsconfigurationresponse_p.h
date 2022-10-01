// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETECORSCONFIGURATIONRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteCorsConfigurationResponse;

class DeleteCorsConfigurationResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteCorsConfigurationResponsePrivate(DeleteCorsConfigurationResponse * const q);

    void parseDeleteCorsConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCorsConfigurationResponse)
    Q_DISABLE_COPY(DeleteCorsConfigurationResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
