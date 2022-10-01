// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETHODRESPONSERESPONSE_P_H
#define QTAWS_UPDATEMETHODRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateMethodResponseResponse;

class UpdateMethodResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateMethodResponseResponsePrivate(UpdateMethodResponseResponse * const q);

    void parseUpdateMethodResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMethodResponseResponse)
    Q_DISABLE_COPY(UpdateMethodResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
