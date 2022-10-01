// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBILLINGGROUPREQUEST_P_H
#define QTAWS_DELETEBILLINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "deletebillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DeleteBillingGroupRequest;

class DeleteBillingGroupRequestPrivate : public IoTRequestPrivate {

public:
    DeleteBillingGroupRequestPrivate(const IoTRequest::Action action,
                                   DeleteBillingGroupRequest * const q);
    DeleteBillingGroupRequestPrivate(const DeleteBillingGroupRequestPrivate &other,
                                   DeleteBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
