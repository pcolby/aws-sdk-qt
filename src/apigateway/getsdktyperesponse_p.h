// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPERESPONSE_P_H
#define QTAWS_GETSDKTYPERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypeResponse;

class GetSdkTypeResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetSdkTypeResponsePrivate(GetSdkTypeResponse * const q);

    void parseGetSdkTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSdkTypeResponse)
    Q_DISABLE_COPY(GetSdkTypeResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
