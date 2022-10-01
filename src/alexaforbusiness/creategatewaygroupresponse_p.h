// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYGROUPRESPONSE_P_H
#define QTAWS_CREATEGATEWAYGROUPRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateGatewayGroupResponse;

class CreateGatewayGroupResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateGatewayGroupResponsePrivate(CreateGatewayGroupResponse * const q);

    void parseCreateGatewayGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGatewayGroupResponse)
    Q_DISABLE_COPY(CreateGatewayGroupResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
