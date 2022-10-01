// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCPEERINGCONNECTIONOPTIONSREQUEST_P_H
#define QTAWS_MODIFYVPCPEERINGCONNECTIONOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpcpeeringconnectionoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcPeeringConnectionOptionsRequest;

class ModifyVpcPeeringConnectionOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcPeeringConnectionOptionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcPeeringConnectionOptionsRequest * const q);
    ModifyVpcPeeringConnectionOptionsRequestPrivate(const ModifyVpcPeeringConnectionOptionsRequestPrivate &other,
                                   ModifyVpcPeeringConnectionOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcPeeringConnectionOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
