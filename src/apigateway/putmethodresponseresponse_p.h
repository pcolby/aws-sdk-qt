// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETHODRESPONSERESPONSE_P_H
#define QTAWS_PUTMETHODRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class PutMethodResponseResponse;

class PutMethodResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit PutMethodResponseResponsePrivate(PutMethodResponseResponse * const q);

    void parsePutMethodResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMethodResponseResponse)
    Q_DISABLE_COPY(PutMethodResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
