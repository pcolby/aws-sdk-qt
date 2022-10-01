// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRACKERSREQUEST_P_H
#define QTAWS_LISTTRACKERSREQUEST_P_H

#include "locationrequest_p.h"
#include "listtrackersrequest.h"

namespace QtAws {
namespace Location {

class ListTrackersRequest;

class ListTrackersRequestPrivate : public LocationRequestPrivate {

public:
    ListTrackersRequestPrivate(const LocationRequest::Action action,
                                   ListTrackersRequest * const q);
    ListTrackersRequestPrivate(const ListTrackersRequestPrivate &other,
                                   ListTrackersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrackersRequest)

};

} // namespace Location
} // namespace QtAws

#endif
