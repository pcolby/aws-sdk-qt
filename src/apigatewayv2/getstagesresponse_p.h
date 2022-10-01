// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGESRESPONSE_P_H
#define QTAWS_GETSTAGESRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetStagesResponse;

class GetStagesResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetStagesResponsePrivate(GetStagesResponse * const q);

    void parseGetStagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStagesResponse)
    Q_DISABLE_COPY(GetStagesResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
