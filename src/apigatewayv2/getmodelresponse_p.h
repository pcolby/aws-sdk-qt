// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMODELRESPONSE_P_H
#define QTAWS_GETMODELRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetModelResponse;

class GetModelResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetModelResponsePrivate(GetModelResponse * const q);

    void parseGetModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetModelResponse)
    Q_DISABLE_COPY(GetModelResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
