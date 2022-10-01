// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTEREQUEST_P_H
#define QTAWS_CALCULATEROUTEREQUEST_P_H

#include "locationrequest_p.h"
#include "calculaterouterequest.h"

namespace QtAws {
namespace Location {

class CalculateRouteRequest;

class CalculateRouteRequestPrivate : public LocationRequestPrivate {

public:
    CalculateRouteRequestPrivate(const LocationRequest::Action action,
                                   CalculateRouteRequest * const q);
    CalculateRouteRequestPrivate(const CalculateRouteRequestPrivate &other,
                                   CalculateRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CalculateRouteRequest)

};

} // namespace Location
} // namespace QtAws

#endif
