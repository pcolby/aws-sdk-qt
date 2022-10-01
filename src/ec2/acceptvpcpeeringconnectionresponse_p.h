// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCPEERINGCONNECTIONRESPONSE_P_H
#define QTAWS_ACCEPTVPCPEERINGCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcPeeringConnectionResponse;

class AcceptVpcPeeringConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AcceptVpcPeeringConnectionResponsePrivate(AcceptVpcPeeringConnectionResponse * const q);

    void parseAcceptVpcPeeringConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(AcceptVpcPeeringConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
