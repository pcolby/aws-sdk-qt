// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGEPLANKEYSRESPONSE_P_H
#define QTAWS_GETUSAGEPLANKEYSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetUsagePlanKeysResponse;

class GetUsagePlanKeysResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetUsagePlanKeysResponsePrivate(GetUsagePlanKeysResponse * const q);

    void parseGetUsagePlanKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsagePlanKeysResponse)
    Q_DISABLE_COPY(GetUsagePlanKeysResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
