// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCECOLLECTIONSREQUEST_P_H
#define QTAWS_LISTGEOFENCECOLLECTIONSREQUEST_P_H

#include "locationrequest_p.h"
#include "listgeofencecollectionsrequest.h"

namespace QtAws {
namespace Location {

class ListGeofenceCollectionsRequest;

class ListGeofenceCollectionsRequestPrivate : public LocationRequestPrivate {

public:
    ListGeofenceCollectionsRequestPrivate(const LocationRequest::Action action,
                                   ListGeofenceCollectionsRequest * const q);
    ListGeofenceCollectionsRequestPrivate(const ListGeofenceCollectionsRequestPrivate &other,
                                   ListGeofenceCollectionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGeofenceCollectionsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
