// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCEEVENTWINDOWREQUEST_P_H
#define QTAWS_ASSOCIATEINSTANCEEVENTWINDOWREQUEST_P_H

#include "ec2request_p.h"
#include "associateinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class AssociateInstanceEventWindowRequest;

class AssociateInstanceEventWindowRequestPrivate : public Ec2RequestPrivate {

public:
    AssociateInstanceEventWindowRequestPrivate(const Ec2Request::Action action,
                                   AssociateInstanceEventWindowRequest * const q);
    AssociateInstanceEventWindowRequestPrivate(const AssociateInstanceEventWindowRequestPrivate &other,
                                   AssociateInstanceEventWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
