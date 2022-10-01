// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOSITIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTPOSITIONCONFIGURATIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class PutPositionConfigurationResponse;

class PutPositionConfigurationResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit PutPositionConfigurationResponsePrivate(PutPositionConfigurationResponse * const q);

    void parsePutPositionConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPositionConfigurationResponse)
    Q_DISABLE_COPY(PutPositionConfigurationResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
