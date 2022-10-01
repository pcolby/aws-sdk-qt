// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGSRESPONSE_P_H
#define QTAWS_GETBASEPATHMAPPINGSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingsResponse;

class GetBasePathMappingsResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetBasePathMappingsResponsePrivate(GetBasePathMappingsResponse * const q);

    void parseGetBasePathMappingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBasePathMappingsResponse)
    Q_DISABLE_COPY(GetBasePathMappingsResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
