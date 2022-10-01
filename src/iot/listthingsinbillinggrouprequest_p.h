// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSINBILLINGGROUPREQUEST_P_H
#define QTAWS_LISTTHINGSINBILLINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingsinbillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class ListThingsInBillingGroupRequest;

class ListThingsInBillingGroupRequestPrivate : public IoTRequestPrivate {

public:
    ListThingsInBillingGroupRequestPrivate(const IoTRequest::Action action,
                                   ListThingsInBillingGroupRequest * const q);
    ListThingsInBillingGroupRequestPrivate(const ListThingsInBillingGroupRequestPrivate &other,
                                   ListThingsInBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingsInBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
