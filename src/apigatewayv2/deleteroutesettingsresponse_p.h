// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTESETTINGSRESPONSE_P_H
#define QTAWS_DELETEROUTESETTINGSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteSettingsResponse;

class DeleteRouteSettingsResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteRouteSettingsResponsePrivate(DeleteRouteSettingsResponse * const q);

    void parseDeleteRouteSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteSettingsResponse)
    Q_DISABLE_COPY(DeleteRouteSettingsResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
