// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINPUTDEVICERESPONSE_P_H
#define QTAWS_REBOOTINPUTDEVICERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class RebootInputDeviceResponse;

class RebootInputDeviceResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit RebootInputDeviceResponsePrivate(RebootInputDeviceResponse * const q);

    void parseRebootInputDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootInputDeviceResponse)
    Q_DISABLE_COPY(RebootInputDeviceResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
