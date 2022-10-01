// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCERESPONSE_P_H
#define QTAWS_GETRESOURCERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetResourceResponse;

class GetResourceResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetResourceResponsePrivate(GetResourceResponse * const q);

    void parseGetResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceResponse)
    Q_DISABLE_COPY(GetResourceResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
