/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_GETDEVICESINPLACEMENTREQUEST_P_H
#define QTAWS_GETDEVICESINPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "getdevicesinplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class GetDevicesInPlacementRequest;

class QTAWS_EXPORT GetDevicesInPlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    GetDevicesInPlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   GetDevicesInPlacementRequest * const q);
    GetDevicesInPlacementRequestPrivate(const GetDevicesInPlacementRequestPrivate &other,
                                   GetDevicesInPlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDevicesInPlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
