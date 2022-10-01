// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_P_H
#define QTAWS_GETEVENTCONFIGURATIONBYRESOURCETYPESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetEventConfigurationByResourceTypesResponse;

class GetEventConfigurationByResourceTypesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetEventConfigurationByResourceTypesResponsePrivate(GetEventConfigurationByResourceTypesResponse * const q);

    void parseGetEventConfigurationByResourceTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventConfigurationByResourceTypesResponse)
    Q_DISABLE_COPY(GetEventConfigurationByResourceTypesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
