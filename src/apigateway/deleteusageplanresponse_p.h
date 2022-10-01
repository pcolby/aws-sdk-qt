// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEPLANRESPONSE_P_H
#define QTAWS_DELETEUSAGEPLANRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteUsagePlanResponse;

class DeleteUsagePlanResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteUsagePlanResponsePrivate(DeleteUsagePlanResponse * const q);

    void parseDeleteUsagePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteUsagePlanResponse)
    Q_DISABLE_COPY(DeleteUsagePlanResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
