// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICESINPLACEMENTRESPONSE_P_H
#define QTAWS_GETDEVICESINPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class GetDevicesInPlacementResponse;

class GetDevicesInPlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit GetDevicesInPlacementResponsePrivate(GetDevicesInPlacementResponse * const q);

    void parseGetDevicesInPlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevicesInPlacementResponse)
    Q_DISABLE_COPY(GetDevicesInPlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
