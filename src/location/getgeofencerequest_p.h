// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOFENCEREQUEST_P_H
#define QTAWS_GETGEOFENCEREQUEST_P_H

#include "locationrequest_p.h"
#include "getgeofencerequest.h"

namespace QtAws {
namespace Location {

class GetGeofenceRequest;

class GetGeofenceRequestPrivate : public LocationRequestPrivate {

public:
    GetGeofenceRequestPrivate(const LocationRequest::Action action,
                                   GetGeofenceRequest * const q);
    GetGeofenceRequestPrivate(const GetGeofenceRequestPrivate &other,
                                   GetGeofenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
