// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMODELRESPONSE_P_H
#define QTAWS_DELETEMODELRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteModelResponse;

class DeleteModelResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteModelResponsePrivate(DeleteModelResponse * const q);

    void parseDeleteModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteModelResponse)
    Q_DISABLE_COPY(DeleteModelResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
