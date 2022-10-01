// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOSITIONSREQUEST_P_H
#define QTAWS_LISTDEVICEPOSITIONSREQUEST_P_H

#include "locationrequest_p.h"
#include "listdevicepositionsrequest.h"

namespace QtAws {
namespace Location {

class ListDevicePositionsRequest;

class ListDevicePositionsRequestPrivate : public LocationRequestPrivate {

public:
    ListDevicePositionsRequestPrivate(const LocationRequest::Action action,
                                   ListDevicePositionsRequest * const q);
    ListDevicePositionsRequestPrivate(const ListDevicePositionsRequestPrivate &other,
                                   ListDevicePositionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDevicePositionsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
