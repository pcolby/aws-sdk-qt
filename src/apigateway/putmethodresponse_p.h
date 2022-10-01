// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODRESPONSE_P_H
#define QTAWS_PUTMETHODRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodResponse;

class PutMethodResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit PutMethodResponsePrivate(PutMethodResponse * const q);

    void parsePutMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMethodResponse)
    Q_DISABLE_COPY(PutMethodResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
