// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICERESOURCESRESPONSE_P_H
#define QTAWS_LISTDEVICERESOURCESRESPONSE_P_H

#include "snowdevicemanagementresponse_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

class ListDeviceResourcesResponse;

class ListDeviceResourcesResponsePrivate : public SnowDeviceManagementResponsePrivate {

public:

    explicit ListDeviceResourcesResponsePrivate(ListDeviceResourcesResponse * const q);

    void parseListDeviceResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceResourcesResponse)
    Q_DISABLE_COPY(ListDeviceResourcesResponsePrivate)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
