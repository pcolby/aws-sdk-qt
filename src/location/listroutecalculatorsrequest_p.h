// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTECALCULATORSREQUEST_P_H
#define QTAWS_LISTROUTECALCULATORSREQUEST_P_H

#include "locationrequest_p.h"
#include "listroutecalculatorsrequest.h"

namespace QtAws {
namespace Location {

class ListRouteCalculatorsRequest;

class ListRouteCalculatorsRequestPrivate : public LocationRequestPrivate {

public:
    ListRouteCalculatorsRequestPrivate(const LocationRequest::Action action,
                                   ListRouteCalculatorsRequest * const q);
    ListRouteCalculatorsRequestPrivate(const ListRouteCalculatorsRequestPrivate &other,
                                   ListRouteCalculatorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRouteCalculatorsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
