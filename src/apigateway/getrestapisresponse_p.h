// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPISRESPONSE_P_H
#define QTAWS_GETRESTAPISRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApisResponse;

class GetRestApisResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetRestApisResponsePrivate(GetRestApisResponse * const q);

    void parseGetRestApisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRestApisResponse)
    Q_DISABLE_COPY(GetRestApisResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
