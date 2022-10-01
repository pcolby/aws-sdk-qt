// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRESERVEDINSTANCESREQUEST_P_H
#define QTAWS_MODIFYRESERVEDINSTANCESREQUEST_P_H

#include "ec2request_p.h"
#include "modifyreservedinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyReservedInstancesRequest;

class ModifyReservedInstancesRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyReservedInstancesRequestPrivate(const Ec2Request::Action action,
                                   ModifyReservedInstancesRequest * const q);
    ModifyReservedInstancesRequestPrivate(const ModifyReservedInstancesRequestPrivate &other,
                                   ModifyReservedInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyReservedInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
