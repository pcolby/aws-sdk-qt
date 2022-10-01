// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCTENANCYREQUEST_P_H
#define QTAWS_MODIFYVPCTENANCYREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvpctenancyrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcTenancyRequest;

class ModifyVpcTenancyRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVpcTenancyRequestPrivate(const Ec2Request::Action action,
                                   ModifyVpcTenancyRequest * const q);
    ModifyVpcTenancyRequestPrivate(const ModifyVpcTenancyRequestPrivate &other,
                                   ModifyVpcTenancyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVpcTenancyRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
