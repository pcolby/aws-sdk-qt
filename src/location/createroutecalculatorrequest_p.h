// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTECALCULATORREQUEST_P_H
#define QTAWS_CREATEROUTECALCULATORREQUEST_P_H

#include "locationrequest_p.h"
#include "createroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class CreateRouteCalculatorRequest;

class CreateRouteCalculatorRequestPrivate : public LocationRequestPrivate {

public:
    CreateRouteCalculatorRequestPrivate(const LocationRequest::Action action,
                                   CreateRouteCalculatorRequest * const q);
    CreateRouteCalculatorRequestPrivate(const CreateRouteCalculatorRequestPrivate &other,
                                   CreateRouteCalculatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
