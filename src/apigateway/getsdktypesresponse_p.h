// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSDKTYPESRESPONSE_P_H
#define QTAWS_GETSDKTYPESRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetSdkTypesResponse;

class GetSdkTypesResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetSdkTypesResponsePrivate(GetSdkTypesResponse * const q);

    void parseGetSdkTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSdkTypesResponse)
    Q_DISABLE_COPY(GetSdkTypesResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
