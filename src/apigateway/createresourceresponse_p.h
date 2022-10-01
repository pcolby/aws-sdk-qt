// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCERESPONSE_P_H
#define QTAWS_CREATERESOURCERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateResourceResponse;

class CreateResourceResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateResourceResponsePrivate(CreateResourceResponse * const q);

    void parseCreateResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceResponse)
    Q_DISABLE_COPY(CreateResourceResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
