// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCPEERINGCONNECTIONRESPONSE_P_H
#define QTAWS_REJECTVPCPEERINGCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcPeeringConnectionResponse;

class RejectVpcPeeringConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RejectVpcPeeringConnectionResponsePrivate(RejectVpcPeeringConnectionResponse * const q);

    void parseRejectVpcPeeringConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(RejectVpcPeeringConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
