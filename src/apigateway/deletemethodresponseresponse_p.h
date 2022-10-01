// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODRESPONSERESPONSE_P_H
#define QTAWS_DELETEMETHODRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodResponseResponse;

class DeleteMethodResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteMethodResponseResponsePrivate(DeleteMethodResponseResponse * const q);

    void parseDeleteMethodResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMethodResponseResponse)
    Q_DISABLE_COPY(DeleteMethodResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
