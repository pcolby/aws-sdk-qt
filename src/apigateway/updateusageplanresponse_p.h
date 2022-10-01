// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGEPLANRESPONSE_P_H
#define QTAWS_UPDATEUSAGEPLANRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateUsagePlanResponse;

class UpdateUsagePlanResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateUsagePlanResponsePrivate(UpdateUsagePlanResponse * const q);

    void parseUpdateUsagePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUsagePlanResponse)
    Q_DISABLE_COPY(UpdateUsagePlanResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
