// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOFENCECOLLECTIONREQUEST_P_H
#define QTAWS_CREATEGEOFENCECOLLECTIONREQUEST_P_H

#include "locationrequest_p.h"
#include "creategeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class CreateGeofenceCollectionRequest;

class CreateGeofenceCollectionRequestPrivate : public LocationRequestPrivate {

public:
    CreateGeofenceCollectionRequestPrivate(const LocationRequest::Action action,
                                   CreateGeofenceCollectionRequest * const q);
    CreateGeofenceCollectionRequestPrivate(const CreateGeofenceCollectionRequestPrivate &other,
                                   CreateGeofenceCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
