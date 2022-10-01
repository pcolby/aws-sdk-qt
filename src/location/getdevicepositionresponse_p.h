// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONRESPONSE_P_H
#define QTAWS_GETDEVICEPOSITIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetDevicePositionResponse;

class GetDevicePositionResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetDevicePositionResponsePrivate(GetDevicePositionResponse * const q);

    void parseGetDevicePositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevicePositionResponse)
    Q_DISABLE_COPY(GetDevicePositionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
