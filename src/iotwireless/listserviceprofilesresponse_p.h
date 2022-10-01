// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEPROFILESRESPONSE_P_H
#define QTAWS_LISTSERVICEPROFILESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListServiceProfilesResponse;

class ListServiceProfilesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListServiceProfilesResponsePrivate(ListServiceProfilesResponse * const q);

    void parseListServiceProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceProfilesResponse)
    Q_DISABLE_COPY(ListServiceProfilesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
