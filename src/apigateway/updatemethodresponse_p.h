// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODRESPONSE_P_H
#define QTAWS_UPDATEMETHODRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodResponse;

class UpdateMethodResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateMethodResponsePrivate(UpdateMethodResponse * const q);

    void parseUpdateMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMethodResponse)
    Q_DISABLE_COPY(UpdateMethodResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
