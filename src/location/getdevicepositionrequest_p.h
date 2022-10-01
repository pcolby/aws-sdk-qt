// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONREQUEST_P_H
#define QTAWS_GETDEVICEPOSITIONREQUEST_P_H

#include "locationrequest_p.h"
#include "getdevicepositionrequest.h"

namespace QtAws {
namespace Location {

class GetDevicePositionRequest;

class GetDevicePositionRequestPrivate : public LocationRequestPrivate {

public:
    GetDevicePositionRequestPrivate(const LocationRequest::Action action,
                                   GetDevicePositionRequest * const q);
    GetDevicePositionRequestPrivate(const GetDevicePositionRequestPrivate &other,
                                   GetDevicePositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevicePositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
