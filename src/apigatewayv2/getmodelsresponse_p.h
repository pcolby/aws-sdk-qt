// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSRESPONSE_P_H
#define QTAWS_GETMODELSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelsResponse;

class GetModelsResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetModelsResponsePrivate(GetModelsResponse * const q);

    void parseGetModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelsResponse)
    Q_DISABLE_COPY(GetModelsResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
