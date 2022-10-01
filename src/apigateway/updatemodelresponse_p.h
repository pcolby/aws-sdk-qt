// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELRESPONSE_P_H
#define QTAWS_UPDATEMODELRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateModelResponse;

class UpdateModelResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateModelResponsePrivate(UpdateModelResponse * const q);

    void parseUpdateModelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateModelResponse)
    Q_DISABLE_COPY(UpdateModelResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
