// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSREQUEST_P_H
#define QTAWS_LISTCONTACTSREQUEST_P_H

#include "groundstationrequest_p.h"
#include "listcontactsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListContactsRequest;

class ListContactsRequestPrivate : public GroundStationRequestPrivate {

public:
    ListContactsRequestPrivate(const GroundStationRequest::Action action,
                                   ListContactsRequest * const q);
    ListContactsRequestPrivate(const ListContactsRequestPrivate &other,
                                   ListContactsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
