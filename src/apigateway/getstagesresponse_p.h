// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGESRESPONSE_P_H
#define QTAWS_GETSTAGESRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetStagesResponse;

class GetStagesResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetStagesResponsePrivate(GetStagesResponse * const q);

    void parseGetStagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetStagesResponse)
    Q_DISABLE_COPY(GetStagesResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
