// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYGROUPRESPONSE_P_H
#define QTAWS_GETGATEWAYGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetGatewayGroupResponse;

class GetGatewayGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit GetGatewayGroupResponsePrivate(GetGatewayGroupResponse * const q);

    void parseGetGatewayGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGatewayGroupResponse)
    Q_DISABLE_COPY(GetGatewayGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
