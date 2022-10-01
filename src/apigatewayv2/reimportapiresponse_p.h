// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REIMPORTAPIRESPONSE_P_H
#define QTAWS_REIMPORTAPIRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class ReimportApiResponse;

class ReimportApiResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit ReimportApiResponsePrivate(ReimportApiResponse * const q);

    void parseReimportApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReimportApiResponse)
    Q_DISABLE_COPY(ReimportApiResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
