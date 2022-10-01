// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCERESPONSE_P_H
#define QTAWS_DELETERESOURCERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteResourceResponse;

class DeleteResourceResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteResourceResponsePrivate(DeleteResourceResponse * const q);

    void parseDeleteResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourceResponse)
    Q_DISABLE_COPY(DeleteResourceResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
