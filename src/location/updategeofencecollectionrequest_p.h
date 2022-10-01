// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOFENCECOLLECTIONREQUEST_P_H
#define QTAWS_UPDATEGEOFENCECOLLECTIONREQUEST_P_H

#include "locationrequest_p.h"
#include "updategeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class UpdateGeofenceCollectionRequest;

class UpdateGeofenceCollectionRequestPrivate : public LocationRequestPrivate {

public:
    UpdateGeofenceCollectionRequestPrivate(const LocationRequest::Action action,
                                   UpdateGeofenceCollectionRequest * const q);
    UpdateGeofenceCollectionRequestPrivate(const UpdateGeofenceCollectionRequestPrivate &other,
                                   UpdateGeofenceCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
