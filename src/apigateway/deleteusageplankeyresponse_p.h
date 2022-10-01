// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANKEYRESPONSE_P_H
#define QTAWS_DELETEUSAGEPLANKEYRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanKeyResponse;

class DeleteUsagePlanKeyResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteUsagePlanKeyResponsePrivate(DeleteUsagePlanKeyResponse * const q);

    void parseDeleteUsagePlanKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUsagePlanKeyResponse)
    Q_DISABLE_COPY(DeleteUsagePlanKeyResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
