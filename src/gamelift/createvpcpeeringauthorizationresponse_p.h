// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGAUTHORIZATIONRESPONSE_P_H
#define QTAWS_CREATEVPCPEERINGAUTHORIZATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateVpcPeeringAuthorizationResponse;

class CreateVpcPeeringAuthorizationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateVpcPeeringAuthorizationResponsePrivate(CreateVpcPeeringAuthorizationResponse * const q);

    void parseCreateVpcPeeringAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcPeeringAuthorizationResponse)
    Q_DISABLE_COPY(CreateVpcPeeringAuthorizationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
