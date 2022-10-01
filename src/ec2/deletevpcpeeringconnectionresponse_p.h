// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEVPCPEERINGCONNECTIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcPeeringConnectionResponse;

class DeleteVpcPeeringConnectionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteVpcPeeringConnectionResponsePrivate(DeleteVpcPeeringConnectionResponse * const q);

    void parseDeleteVpcPeeringConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(DeleteVpcPeeringConnectionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
