// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELTEMPLATERESPONSE_P_H
#define QTAWS_GETMODELTEMPLATERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetModelTemplateResponse;

class GetModelTemplateResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetModelTemplateResponsePrivate(GetModelTemplateResponse * const q);

    void parseGetModelTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelTemplateResponse)
    Q_DISABLE_COPY(GetModelTemplateResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
