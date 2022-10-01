// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTEVENTCONFIGURATIONSRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListEventConfigurationsResponse;

class ListEventConfigurationsResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListEventConfigurationsResponsePrivate(ListEventConfigurationsResponse * const q);

    void parseListEventConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventConfigurationsResponse)
    Q_DISABLE_COPY(ListEventConfigurationsResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
