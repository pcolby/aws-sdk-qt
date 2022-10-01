// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICERESPONSE_P_H
#define QTAWS_LISTCLIENTDEVICESASSOCIATEDWITHCOREDEVICERESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListClientDevicesAssociatedWithCoreDeviceResponse;

class ListClientDevicesAssociatedWithCoreDeviceResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListClientDevicesAssociatedWithCoreDeviceResponsePrivate(ListClientDevicesAssociatedWithCoreDeviceResponse * const q);

    void parseListClientDevicesAssociatedWithCoreDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClientDevicesAssociatedWithCoreDeviceResponse)
    Q_DISABLE_COPY(ListClientDevicesAssociatedWithCoreDeviceResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
