// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIMAPPINGRESPONSE_P_H
#define QTAWS_UPDATEAPIMAPPINGRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiMappingResponse;

class UpdateApiMappingResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateApiMappingResponsePrivate(UpdateApiMappingResponse * const q);

    void parseUpdateApiMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiMappingResponse)
    Q_DISABLE_COPY(UpdateApiMappingResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
