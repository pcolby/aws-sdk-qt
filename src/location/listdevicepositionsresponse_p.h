// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEPOSITIONSRESPONSE_P_H
#define QTAWS_LISTDEVICEPOSITIONSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListDevicePositionsResponse;

class ListDevicePositionsResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListDevicePositionsResponsePrivate(ListDevicePositionsResponse * const q);

    void parseListDevicePositionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDevicePositionsResponse)
    Q_DISABLE_COPY(ListDevicePositionsResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
