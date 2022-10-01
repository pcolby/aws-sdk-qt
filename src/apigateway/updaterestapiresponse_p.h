// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESTAPIRESPONSE_P_H
#define QTAWS_UPDATERESTAPIRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateRestApiResponse;

class UpdateRestApiResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateRestApiResponsePrivate(UpdateRestApiResponse * const q);

    void parseUpdateRestApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRestApiResponse)
    Q_DISABLE_COPY(UpdateRestApiResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
