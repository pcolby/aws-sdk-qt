// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGGROUPSREQUEST_P_H
#define QTAWS_LISTTHINGGROUPSREQUEST_P_H

#include "iotrequest_p.h"
#include "listthinggroupsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingGroupsRequest;

class ListThingGroupsRequestPrivate : public IoTRequestPrivate {

public:
    ListThingGroupsRequestPrivate(const IoTRequest::Action action,
                                   ListThingGroupsRequest * const q);
    ListThingGroupsRequestPrivate(const ListThingGroupsRequestPrivate &other,
                                   ListThingGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingGroupsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
