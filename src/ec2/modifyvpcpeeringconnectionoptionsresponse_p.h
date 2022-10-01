// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCPEERINGCONNECTIONOPTIONSRESPONSE_P_H
#define QTAWS_MODIFYVPCPEERINGCONNECTIONOPTIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcPeeringConnectionOptionsResponse;

class ModifyVpcPeeringConnectionOptionsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyVpcPeeringConnectionOptionsResponsePrivate(ModifyVpcPeeringConnectionOptionsResponse * const q);

    void parseModifyVpcPeeringConnectionOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyVpcPeeringConnectionOptionsResponse)
    Q_DISABLE_COPY(ModifyVpcPeeringConnectionOptionsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
