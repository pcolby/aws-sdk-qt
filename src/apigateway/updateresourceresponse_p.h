// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCERESPONSE_P_H
#define QTAWS_UPDATERESOURCERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateResourceResponse;

class UpdateResourceResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateResourceResponsePrivate(UpdateResourceResponse * const q);

    void parseUpdateResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceResponse)
    Q_DISABLE_COPY(UpdateResourceResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
