// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_DEREGISTERINSTANCEEVENTNOTIFICATIONATTRIBUTESREQUEST_P_H

#include "ec2request_p.h"
#include "deregisterinstanceeventnotificationattributesrequest.h"

namespace QtAws {
namespace Ec2 {

class DeregisterInstanceEventNotificationAttributesRequest;

class DeregisterInstanceEventNotificationAttributesRequestPrivate : public Ec2RequestPrivate {

public:
    DeregisterInstanceEventNotificationAttributesRequestPrivate(const Ec2Request::Action action,
                                   DeregisterInstanceEventNotificationAttributesRequest * const q);
    DeregisterInstanceEventNotificationAttributesRequestPrivate(const DeregisterInstanceEventNotificationAttributesRequestPrivate &other,
                                   DeregisterInstanceEventNotificationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterInstanceEventNotificationAttributesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
