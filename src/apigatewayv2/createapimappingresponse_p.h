// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIMAPPINGRESPONSE_P_H
#define QTAWS_CREATEAPIMAPPINGRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateApiMappingResponse;

class CreateApiMappingResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateApiMappingResponsePrivate(CreateApiMappingResponse * const q);

    void parseCreateApiMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApiMappingResponse)
    Q_DISABLE_COPY(CreateApiMappingResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
