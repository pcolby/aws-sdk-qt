// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIRESPONSE_P_H
#define QTAWS_DELETEAPIRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteApiResponse;

class DeleteApiResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteApiResponsePrivate(DeleteApiResponse * const q);

    void parseDeleteApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApiResponse)
    Q_DISABLE_COPY(DeleteApiResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
