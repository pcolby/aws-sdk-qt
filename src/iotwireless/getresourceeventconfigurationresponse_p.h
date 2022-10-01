// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEEVENTCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETRESOURCEEVENTCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceEventConfigurationResponse;

class GetResourceEventConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetResourceEventConfigurationResponsePrivate(GetResourceEventConfigurationResponse * const q);

    void parseGetResourceEventConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceEventConfigurationResponse)
    Q_DISABLE_COPY(GetResourceEventConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
