// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBASEPATHMAPPINGRESPONSE_P_H
#define QTAWS_DELETEBASEPATHMAPPINGRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteBasePathMappingResponse;

class DeleteBasePathMappingResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteBasePathMappingResponsePrivate(DeleteBasePathMappingResponse * const q);

    void parseDeleteBasePathMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBasePathMappingResponse)
    Q_DISABLE_COPY(DeleteBasePathMappingResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
