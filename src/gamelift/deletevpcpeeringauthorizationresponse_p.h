// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGAUTHORIZATIONRESPONSE_P_H
#define QTAWS_DELETEVPCPEERINGAUTHORIZATIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringAuthorizationResponse;

class DeleteVpcPeeringAuthorizationResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteVpcPeeringAuthorizationResponsePrivate(DeleteVpcPeeringAuthorizationResponse * const q);

    void parseDeleteVpcPeeringAuthorizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcPeeringAuthorizationResponse)
    Q_DISABLE_COPY(DeleteVpcPeeringAuthorizationResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
