// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTECALCULATORREQUEST_P_H
#define QTAWS_DELETEROUTECALCULATORREQUEST_P_H

#include "locationrequest_p.h"
#include "deleteroutecalculatorrequest.h"

namespace QtAws {
namespace Location {

class DeleteRouteCalculatorRequest;

class DeleteRouteCalculatorRequestPrivate : public LocationRequestPrivate {

public:
    DeleteRouteCalculatorRequestPrivate(const LocationRequest::Action action,
                                   DeleteRouteCalculatorRequest * const q);
    DeleteRouteCalculatorRequestPrivate(const DeleteRouteCalculatorRequestPrivate &other,
                                   DeleteRouteCalculatorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRouteCalculatorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
