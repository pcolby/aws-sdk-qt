// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDEVICEWITHPLACEMENTRESPONSE_P_H
#define QTAWS_ASSOCIATEDEVICEWITHPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class AssociateDeviceWithPlacementResponse;

class AssociateDeviceWithPlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit AssociateDeviceWithPlacementResponsePrivate(AssociateDeviceWithPlacementResponse * const q);

    void parseAssociateDeviceWithPlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateDeviceWithPlacementResponse)
    Q_DISABLE_COPY(AssociateDeviceWithPlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
