// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETPOSITIONCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionConfigurationResponse;

class GetPositionConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetPositionConfigurationResponsePrivate(GetPositionConfigurationResponse * const q);

    void parseGetPositionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPositionConfigurationResponse)
    Q_DISABLE_COPY(GetPositionConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
