// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCESREQUEST_P_H
#define QTAWS_LISTGEOFENCESREQUEST_P_H

#include "locationrequest_p.h"
#include "listgeofencesrequest.h"

namespace QtAws {
namespace Location {

class ListGeofencesRequest;

class ListGeofencesRequestPrivate : public LocationRequestPrivate {

public:
    ListGeofencesRequestPrivate(const LocationRequest::Action action,
                                   ListGeofencesRequest * const q);
    ListGeofencesRequestPrivate(const ListGeofencesRequestPrivate &other,
                                   ListGeofencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGeofencesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
