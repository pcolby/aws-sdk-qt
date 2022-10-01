// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSLOGSETTINGSRESPONSE_P_H
#define QTAWS_DELETEACCESSLOGSETTINGSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteAccessLogSettingsResponse;

class DeleteAccessLogSettingsResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteAccessLogSettingsResponsePrivate(DeleteAccessLogSettingsResponse * const q);

    void parseDeleteAccessLogSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessLogSettingsResponse)
    Q_DISABLE_COPY(DeleteAccessLogSettingsResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
