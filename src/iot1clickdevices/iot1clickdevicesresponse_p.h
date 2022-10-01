// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOT1CLICKDEVICESRESPONSE_P_H
#define QTAWS_IOT1CLICKDEVICESRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoT1ClickDevices {

class IoT1ClickDevicesResponse;

class IoT1ClickDevicesResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoT1ClickDevicesResponsePrivate(IoT1ClickDevicesResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoT1ClickDevicesResponse)
    Q_DISABLE_COPY(IoT1ClickDevicesResponsePrivate)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
