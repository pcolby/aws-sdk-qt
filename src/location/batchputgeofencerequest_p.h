// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTGEOFENCEREQUEST_P_H
#define QTAWS_BATCHPUTGEOFENCEREQUEST_P_H

#include "locationrequest_p.h"
#include "batchputgeofencerequest.h"

namespace QtAws {
namespace Location {

class BatchPutGeofenceRequest;

class BatchPutGeofenceRequestPrivate : public LocationRequestPrivate {

public:
    BatchPutGeofenceRequestPrivate(const LocationRequest::Action action,
                                   BatchPutGeofenceRequest * const q);
    BatchPutGeofenceRequestPrivate(const BatchPutGeofenceRequestPrivate &other,
                                   BatchPutGeofenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
