// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGEOFENCEREQUEST_P_H
#define QTAWS_PUTGEOFENCEREQUEST_P_H

#include "locationrequest_p.h"
#include "putgeofencerequest.h"

namespace QtAws {
namespace Location {

class PutGeofenceRequest;

class PutGeofenceRequestPrivate : public LocationRequestPrivate {

public:
    PutGeofenceRequestPrivate(const LocationRequest::Action action,
                                   PutGeofenceRequest * const q);
    PutGeofenceRequestPrivate(const PutGeofenceRequestPrivate &other,
                                   PutGeofenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
