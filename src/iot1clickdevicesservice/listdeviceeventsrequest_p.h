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

#ifndef QTAWS_LISTDEVICEEVENTSREQUEST_P_H
#define QTAWS_LISTDEVICEEVENTSREQUEST_P_H

#include "iot1clickdevicesservicerequest_p.h"
#include "listdeviceeventsrequest.h"

namespace QtAws {
namespace IoT1ClickDevicesService {

class ListDeviceEventsRequest;

class QTAWS_EXPORT ListDeviceEventsRequestPrivate : public IoT1ClickDevicesServiceRequestPrivate {

public:
    ListDeviceEventsRequestPrivate(const IoT1ClickDevicesServiceRequest::Action action,
                                   ListDeviceEventsRequest * const q);
    ListDeviceEventsRequestPrivate(const ListDeviceEventsRequestPrivate &other,
                                   ListDeviceEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceEventsRequest)

};

} // namespace IoT1ClickDevicesService
} // namespace QtAws

#endif
