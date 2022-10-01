// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYAVAILABILITYZONEGROUPREQUEST_P_H
#define QTAWS_MODIFYAVAILABILITYZONEGROUPREQUEST_P_H

#include "ec2request_p.h"
#include "modifyavailabilityzonegrouprequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyAvailabilityZoneGroupRequest;

class ModifyAvailabilityZoneGroupRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyAvailabilityZoneGroupRequestPrivate(const Ec2Request::Action action,
                                   ModifyAvailabilityZoneGroupRequest * const q);
    ModifyAvailabilityZoneGroupRequestPrivate(const ModifyAvailabilityZoneGroupRequestPrivate &other,
                                   ModifyAvailabilityZoneGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyAvailabilityZoneGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
