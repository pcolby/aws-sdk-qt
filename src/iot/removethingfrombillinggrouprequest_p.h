// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMBILLINGGROUPREQUEST_P_H
#define QTAWS_REMOVETHINGFROMBILLINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "removethingfrombillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromBillingGroupRequest;

class RemoveThingFromBillingGroupRequestPrivate : public IoTRequestPrivate {

public:
    RemoveThingFromBillingGroupRequestPrivate(const IoTRequest::Action action,
                                   RemoveThingFromBillingGroupRequest * const q);
    RemoveThingFromBillingGroupRequestPrivate(const RemoveThingFromBillingGroupRequestPrivate &other,
                                   RemoveThingFromBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveThingFromBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
