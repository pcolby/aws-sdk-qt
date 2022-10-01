// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTHORIZERRESPONSE_P_H
#define QTAWS_DELETEAUTHORIZERRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteAuthorizerResponse;

class DeleteAuthorizerResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteAuthorizerResponsePrivate(DeleteAuthorizerResponse * const q);

    void parseDeleteAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAuthorizerResponse)
    Q_DISABLE_COPY(DeleteAuthorizerResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
