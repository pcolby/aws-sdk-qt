// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONHISTORYREQUEST_P_H
#define QTAWS_GETDEVICEPOSITIONHISTORYREQUEST_P_H

#include "locationrequest_p.h"
#include "getdevicepositionhistoryrequest.h"

namespace QtAws {
namespace Location {

class GetDevicePositionHistoryRequest;

class GetDevicePositionHistoryRequestPrivate : public LocationRequestPrivate {

public:
    GetDevicePositionHistoryRequestPrivate(const LocationRequest::Action action,
                                   GetDevicePositionHistoryRequest * const q);
    GetDevicePositionHistoryRequestPrivate(const GetDevicePositionHistoryRequestPrivate &other,
                                   GetDevicePositionHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevicePositionHistoryRequest)

};

} // namespace Location
} // namespace QtAws

#endif
