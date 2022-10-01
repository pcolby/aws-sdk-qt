// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTECALCULATORREQUEST_P_H
#define QTAWS_UPDATEROUTECALCULATORREQUEST_P_H

#include "locationrequest_p.h"
#include "updateroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class UpdateRouteCalculatorRequest;

class UpdateRouteCalculatorRequestPrivate : public LocationRequestPrivate {

public:
    UpdateRouteCalculatorRequestPrivate(const LocationRequest::Action action,
                                   UpdateRouteCalculatorRequest * const q);
    UpdateRouteCalculatorRequestPrivate(const UpdateRouteCalculatorRequestPrivate &other,
                                   UpdateRouteCalculatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
