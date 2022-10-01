// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESTAPIRESPONSE_P_H
#define QTAWS_PUTRESTAPIRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class PutRestApiResponse;

class PutRestApiResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit PutRestApiResponsePrivate(PutRestApiResponse * const q);

    void parsePutRestApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRestApiResponse)
    Q_DISABLE_COPY(PutRestApiResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
