// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELSRESPONSE_P_H
#define QTAWS_GETMODELSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetModelsResponse;

class GetModelsResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetModelsResponsePrivate(GetModelsResponse * const q);

    void parseGetModelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelsResponse)
    Q_DISABLE_COPY(GetModelsResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
