// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKRESPONSE_P_H
#define QTAWS_GETSDKRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkResponse;

class GetSdkResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetSdkResponsePrivate(GetSdkResponse * const q);

    void parseGetSdkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSdkResponse)
    Q_DISABLE_COPY(GetSdkResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
