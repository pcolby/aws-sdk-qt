// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANRESPONSE_P_H
#define QTAWS_CREATEUSAGEPLANRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanResponse;

class CreateUsagePlanResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateUsagePlanResponsePrivate(CreateUsagePlanResponse * const q);

    void parseCreateUsagePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUsagePlanResponse)
    Q_DISABLE_COPY(CreateUsagePlanResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
