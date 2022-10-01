// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBASEPATHMAPPINGRESPONSE_P_H
#define QTAWS_CREATEBASEPATHMAPPINGRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateBasePathMappingResponse;

class CreateBasePathMappingResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateBasePathMappingResponsePrivate(CreateBasePathMappingResponse * const q);

    void parseCreateBasePathMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBasePathMappingResponse)
    Q_DISABLE_COPY(CreateBasePathMappingResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
