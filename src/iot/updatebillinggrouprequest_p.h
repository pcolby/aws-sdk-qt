// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBILLINGGROUPREQUEST_P_H
#define QTAWS_UPDATEBILLINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "updatebillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class UpdateBillingGroupRequest;

class UpdateBillingGroupRequestPrivate : public IoTRequestPrivate {

public:
    UpdateBillingGroupRequestPrivate(const IoTRequest::Action action,
                                   UpdateBillingGroupRequest * const q);
    UpdateBillingGroupRequestPrivate(const UpdateBillingGroupRequestPrivate &other,
                                   UpdateBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
