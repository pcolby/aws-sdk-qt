// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIMAPPINGRESPONSE_P_H
#define QTAWS_DELETEAPIMAPPINGRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiMappingResponse;

class DeleteApiMappingResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteApiMappingResponsePrivate(DeleteApiMappingResponse * const q);

    void parseDeleteApiMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApiMappingResponse)
    Q_DISABLE_COPY(DeleteApiMappingResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
