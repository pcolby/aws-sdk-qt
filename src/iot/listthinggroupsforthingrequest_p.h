// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSFORTHINGREQUEST_P_H
#define QTAWS_LISTTHINGGROUPSFORTHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "listthinggroupsforthingrequest.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsForThingRequest;

class ListThingGroupsForThingRequestPrivate : public IoTRequestPrivate {

public:
    ListThingGroupsForThingRequestPrivate(const IoTRequest::Action action,
                                   ListThingGroupsForThingRequest * const q);
    ListThingGroupsForThingRequestPrivate(const ListThingGroupsForThingRequestPrivate &other,
                                   ListThingGroupsForThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingGroupsForThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
