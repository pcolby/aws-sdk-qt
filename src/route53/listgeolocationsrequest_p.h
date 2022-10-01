// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOLOCATIONSREQUEST_P_H
#define QTAWS_LISTGEOLOCATIONSREQUEST_P_H

#include "route53request_p.h"
#include "listgeolocationsrequest.h"

namespace QtAws {
namespace Route53 {

class ListGeoLocationsRequest;

class ListGeoLocationsRequestPrivate : public Route53RequestPrivate {

public:
    ListGeoLocationsRequestPrivate(const Route53Request::Action action,
                                   ListGeoLocationsRequest * const q);
    ListGeoLocationsRequestPrivate(const ListGeoLocationsRequestPrivate &other,
                                   ListGeoLocationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGeoLocationsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
