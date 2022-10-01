// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGSINTHINGGROUPREQUEST_P_H
#define QTAWS_LISTTHINGSINTHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingsinthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class ListThingsInThingGroupRequest;

class ListThingsInThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    ListThingsInThingGroupRequestPrivate(const IoTRequest::Action action,
                                   ListThingsInThingGroupRequest * const q);
    ListThingsInThingGroupRequestPrivate(const ListThingsInThingGroupRequestPrivate &other,
                                   ListThingsInThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingsInThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
