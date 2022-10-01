// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOFENCECOLLECTIONREQUEST_P_H
#define QTAWS_DELETEGEOFENCECOLLECTIONREQUEST_P_H

#include "locationrequest_p.h"
#include "deletegeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class DeleteGeofenceCollectionRequest;

class DeleteGeofenceCollectionRequestPrivate : public LocationRequestPrivate {

public:
    DeleteGeofenceCollectionRequestPrivate(const LocationRequest::Action action,
                                   DeleteGeofenceCollectionRequest * const q);
    DeleteGeofenceCollectionRequestPrivate(const DeleteGeofenceCollectionRequestPrivate &other,
                                   DeleteGeofenceCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
