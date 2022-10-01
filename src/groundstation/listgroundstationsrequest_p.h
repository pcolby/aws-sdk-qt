// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUNDSTATIONSREQUEST_P_H
#define QTAWS_LISTGROUNDSTATIONSREQUEST_P_H

#include "groundstationrequest_p.h"
#include "listgroundstationsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListGroundStationsRequest;

class ListGroundStationsRequestPrivate : public GroundStationRequestPrivate {

public:
    ListGroundStationsRequestPrivate(const GroundStationRequest::Action action,
                                   ListGroundStationsRequest * const q);
    ListGroundStationsRequestPrivate(const ListGroundStationsRequestPrivate &other,
                                   ListGroundStationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroundStationsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
