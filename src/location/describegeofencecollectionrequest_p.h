// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGEOFENCECOLLECTIONREQUEST_P_H
#define QTAWS_DESCRIBEGEOFENCECOLLECTIONREQUEST_P_H

#include "locationrequest_p.h"
#include "describegeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class DescribeGeofenceCollectionRequest;

class DescribeGeofenceCollectionRequestPrivate : public LocationRequestPrivate {

public:
    DescribeGeofenceCollectionRequestPrivate(const LocationRequest::Action action,
                                   DescribeGeofenceCollectionRequest * const q);
    DescribeGeofenceCollectionRequestPrivate(const DescribeGeofenceCollectionRequestPrivate &other,
                                   DescribeGeofenceCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
