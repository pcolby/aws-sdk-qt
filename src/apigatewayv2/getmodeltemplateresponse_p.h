// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELTEMPLATERESPONSE_P_H
#define QTAWS_GETMODELTEMPLATERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelTemplateResponse;

class GetModelTemplateResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetModelTemplateResponsePrivate(GetModelTemplateResponse * const q);

    void parseGetModelTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelTemplateResponse)
    Q_DISABLE_COPY(GetModelTemplateResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
