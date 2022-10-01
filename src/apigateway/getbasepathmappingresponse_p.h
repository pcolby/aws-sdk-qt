// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBASEPATHMAPPINGRESPONSE_P_H
#define QTAWS_GETBASEPATHMAPPINGRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetBasePathMappingResponse;

class GetBasePathMappingResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetBasePathMappingResponsePrivate(GetBasePathMappingResponse * const q);

    void parseGetBasePathMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBasePathMappingResponse)
    Q_DISABLE_COPY(GetBasePathMappingResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
