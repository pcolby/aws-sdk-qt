// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTHINGTOBILLINGGROUPREQUEST_P_H
#define QTAWS_ADDTHINGTOBILLINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "addthingtobillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class AddThingToBillingGroupRequest;

class AddThingToBillingGroupRequestPrivate : public IoTRequestPrivate {

public:
    AddThingToBillingGroupRequestPrivate(const IoTRequest::Action action,
                                   AddThingToBillingGroupRequest * const q);
    AddThingToBillingGroupRequestPrivate(const AddThingToBillingGroupRequestPrivate &other,
                                   AddThingToBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddThingToBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
