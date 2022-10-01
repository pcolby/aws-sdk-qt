// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTEMATRIXREQUEST_P_H
#define QTAWS_CALCULATEROUTEMATRIXREQUEST_P_H

#include "locationrequest_p.h"
#include "calculateroutematrixrequest.h"

namespace QtAws {
namespace Location {

class CalculateRouteMatrixRequest;

class CalculateRouteMatrixRequestPrivate : public LocationRequestPrivate {

public:
    CalculateRouteMatrixRequestPrivate(const LocationRequest::Action action,
                                   CalculateRouteMatrixRequest * const q);
    CalculateRouteMatrixRequestPrivate(const CalculateRouteMatrixRequestPrivate &other,
                                   CalculateRouteMatrixRequest * const q);

private:
    Q_DECLARE_PUBLIC(CalculateRouteMatrixRequest)

};

} // namespace Location
} // namespace QtAws

#endif
