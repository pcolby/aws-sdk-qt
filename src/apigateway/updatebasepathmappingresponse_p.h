// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBASEPATHMAPPINGRESPONSE_P_H
#define QTAWS_UPDATEBASEPATHMAPPINGRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateBasePathMappingResponse;

class UpdateBasePathMappingResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateBasePathMappingResponsePrivate(UpdateBasePathMappingResponse * const q);

    void parseUpdateBasePathMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBasePathMappingResponse)
    Q_DISABLE_COPY(UpdateBasePathMappingResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
