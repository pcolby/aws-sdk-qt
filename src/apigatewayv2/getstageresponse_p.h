// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGERESPONSE_P_H
#define QTAWS_GETSTAGERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetStageResponse;

class GetStageResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetStageResponsePrivate(GetStageResponse * const q);

    void parseGetStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStageResponse)
    Q_DISABLE_COPY(GetStageResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
