// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHPLACEMENTREQUEST_P_H
#define QTAWS_ASSOCIATEDEVICEWITHPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "associatedevicewithplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class AssociateDeviceWithPlacementRequest;

class AssociateDeviceWithPlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    AssociateDeviceWithPlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   AssociateDeviceWithPlacementRequest * const q);
    AssociateDeviceWithPlacementRequestPrivate(const AssociateDeviceWithPlacementRequestPrivate &other,
                                   AssociateDeviceWithPlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDeviceWithPlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
