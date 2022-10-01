// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTAGERESPONSE_P_H
#define QTAWS_DELETESTAGERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteStageResponse;

class DeleteStageResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteStageResponsePrivate(DeleteStageResponse * const q);

    void parseDeleteStageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteStageResponse)
    Q_DISABLE_COPY(DeleteStageResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
