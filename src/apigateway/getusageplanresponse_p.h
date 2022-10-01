// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANRESPONSE_P_H
#define QTAWS_GETUSAGEPLANRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanResponse;

class GetUsagePlanResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetUsagePlanResponsePrivate(GetUsagePlanResponse * const q);

    void parseGetUsagePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsagePlanResponse)
    Q_DISABLE_COPY(GetUsagePlanResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
