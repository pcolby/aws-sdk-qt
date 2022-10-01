// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTDEVICERESPONSE_P_H
#define QTAWS_UPDATEINPUTDEVICERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputDeviceResponse;

class UpdateInputDeviceResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateInputDeviceResponsePrivate(UpdateInputDeviceResponse * const q);

    void parseUpdateInputDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInputDeviceResponse)
    Q_DISABLE_COPY(UpdateInputDeviceResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
