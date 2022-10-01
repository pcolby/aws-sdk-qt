// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOSITIONCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTPOSITIONCONFIGURATIONSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListPositionConfigurationsResponse;

class ListPositionConfigurationsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListPositionConfigurationsResponsePrivate(ListPositionConfigurationsResponse * const q);

    void parseListPositionConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPositionConfigurationsResponse)
    Q_DISABLE_COPY(ListPositionConfigurationsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
