// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEPLANKEYRESPONSE_P_H
#define QTAWS_CREATEUSAGEPLANKEYRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateUsagePlanKeyResponse;

class CreateUsagePlanKeyResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateUsagePlanKeyResponsePrivate(CreateUsagePlanKeyResponse * const q);

    void parseCreateUsagePlanKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUsagePlanKeyResponse)
    Q_DISABLE_COPY(CreateUsagePlanKeyResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
