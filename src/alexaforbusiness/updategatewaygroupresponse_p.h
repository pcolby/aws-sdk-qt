// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYGROUPRESPONSE_P_H
#define QTAWS_UPDATEGATEWAYGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateGatewayGroupResponse;

class UpdateGatewayGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit UpdateGatewayGroupResponsePrivate(UpdateGatewayGroupResponse * const q);

    void parseUpdateGatewayGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayGroupResponse)
    Q_DISABLE_COPY(UpdateGatewayGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
