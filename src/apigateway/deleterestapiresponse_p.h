// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESTAPIRESPONSE_P_H
#define QTAWS_DELETERESTAPIRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteRestApiResponse;

class DeleteRestApiResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteRestApiResponsePrivate(DeleteRestApiResponse * const q);

    void parseDeleteRestApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRestApiResponse)
    Q_DISABLE_COPY(DeleteRestApiResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
