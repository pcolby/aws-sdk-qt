// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTAGERESPONSE_P_H
#define QTAWS_CREATESTAGERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateStageResponse;

class CreateStageResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateStageResponsePrivate(CreateStageResponse * const q);

    void parseCreateStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStageResponse)
    Q_DISABLE_COPY(CreateStageResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
