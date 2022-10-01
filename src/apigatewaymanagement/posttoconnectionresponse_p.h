// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTOCONNECTIONRESPONSE_P_H
#define QTAWS_POSTTOCONNECTIONRESPONSE_P_H

#include "apigatewaymanagementresponse_p.h"

namespace QtAws {
namespace ApiGatewayManagement {

class PostToConnectionResponse;

class PostToConnectionResponsePrivate : public ApiGatewayManagementResponsePrivate {

public:

    explicit PostToConnectionResponsePrivate(PostToConnectionResponse * const q);

    void parsePostToConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostToConnectionResponse)
    Q_DISABLE_COPY(PostToConnectionResponsePrivate)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
