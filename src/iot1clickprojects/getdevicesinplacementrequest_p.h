// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICESINPLACEMENTREQUEST_P_H
#define QTAWS_GETDEVICESINPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "getdevicesinplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class GetDevicesInPlacementRequest;

class GetDevicesInPlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

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
