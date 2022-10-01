// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGERESPONSE_P_H
#define QTAWS_GETUSAGERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetUsageResponse;

class GetUsageResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetUsageResponsePrivate(GetUsageResponse * const q);

    void parseGetUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUsageResponse)
    Q_DISABLE_COPY(GetUsageResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
