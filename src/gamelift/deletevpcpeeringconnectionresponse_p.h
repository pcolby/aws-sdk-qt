// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEVPCPEERINGCONNECTIONRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteVpcPeeringConnectionResponse;

class DeleteVpcPeeringConnectionResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteVpcPeeringConnectionResponsePrivate(DeleteVpcPeeringConnectionResponse * const q);

    void parseDeleteVpcPeeringConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(DeleteVpcPeeringConnectionResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
