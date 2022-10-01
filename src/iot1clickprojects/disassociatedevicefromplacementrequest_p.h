// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTREQUEST_P_H
#define QTAWS_DISASSOCIATEDEVICEFROMPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "disassociatedevicefromplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DisassociateDeviceFromPlacementRequest;

class DisassociateDeviceFromPlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    DisassociateDeviceFromPlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   DisassociateDeviceFromPlacementRequest * const q);
    DisassociateDeviceFromPlacementRequestPrivate(const DisassociateDeviceFromPlacementRequestPrivate &other,
                                   DisassociateDeviceFromPlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDeviceFromPlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
