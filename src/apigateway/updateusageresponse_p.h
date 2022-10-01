// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSAGERESPONSE_P_H
#define QTAWS_UPDATEUSAGERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateUsageResponse;

class UpdateUsageResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateUsageResponsePrivate(UpdateUsageResponse * const q);

    void parseUpdateUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateUsageResponse)
    Q_DISABLE_COPY(UpdateUsageResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
