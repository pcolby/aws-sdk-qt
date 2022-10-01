// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGCONNECTIONRESPONSE_P_H
#define QTAWS_CREATEVPCPEERINGCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcPeeringConnectionResponse;

class CreateVpcPeeringConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateVpcPeeringConnectionResponsePrivate(CreateVpcPeeringConnectionResponse * const q);

    void parseCreateVpcPeeringConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(CreateVpcPeeringConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
