// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIMAPPINGRESPONSE_P_H
#define QTAWS_GETAPIMAPPINGRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiMappingResponse;

class GetApiMappingResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetApiMappingResponsePrivate(GetApiMappingResponse * const q);

    void parseGetApiMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApiMappingResponse)
    Q_DISABLE_COPY(GetApiMappingResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
