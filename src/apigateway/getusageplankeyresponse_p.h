// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYRESPONSE_P_H
#define QTAWS_GETUSAGEPLANKEYRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeyResponse;

class GetUsagePlanKeyResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetUsagePlanKeyResponsePrivate(GetUsagePlanKeyResponse * const q);

    void parseGetUsagePlanKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsagePlanKeyResponse)
    Q_DISABLE_COPY(GetUsagePlanKeyResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
