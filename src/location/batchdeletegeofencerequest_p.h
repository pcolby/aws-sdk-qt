// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEGEOFENCEREQUEST_P_H
#define QTAWS_BATCHDELETEGEOFENCEREQUEST_P_H

#include "locationrequest_p.h"
#include "batchdeletegeofencerequest.h"

namespace QtAws {
namespace Location {

class BatchDeleteGeofenceRequest;

class BatchDeleteGeofenceRequestPrivate : public LocationRequestPrivate {

public:
    BatchDeleteGeofenceRequestPrivate(const LocationRequest::Action action,
                                   BatchDeleteGeofenceRequest * const q);
    BatchDeleteGeofenceRequestPrivate(const BatchDeleteGeofenceRequestPrivate &other,
                                   BatchDeleteGeofenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
