// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETHODRESPONSE_P_H
#define QTAWS_DELETEMETHODRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteMethodResponse;

class DeleteMethodResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteMethodResponsePrivate(DeleteMethodResponse * const q);

    void parseDeleteMethodResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMethodResponse)
    Q_DISABLE_COPY(DeleteMethodResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
