/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_FINALIZEDEVICECLAIMREQUEST_P_H
#define QTAWS_FINALIZEDEVICECLAIMREQUEST_P_H

#include "iot1clickdevicesservicerequest_p.h"
#include "finalizedeviceclaimrequest.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

class FinalizeDeviceClaimRequest;

class QTAWS_EXPORT FinalizeDeviceClaimRequestPrivate : public IoT1ClickDevicesServiceRequestPrivate {

public:
    FinalizeDeviceClaimRequestPrivate(const IoT1ClickDevicesServiceRequest::Action action,
                                   FinalizeDeviceClaimRequest * const q);
    FinalizeDeviceClaimRequestPrivate(const FinalizeDeviceClaimRequestPrivate &other,
                                   FinalizeDeviceClaimRequest * const q);

private:
    Q_DECLARE_PUBLIC(FinalizeDeviceClaimRequest)

};

} // namespace IoT1ClickDevicesService
} // namespace QtAws

#endif
