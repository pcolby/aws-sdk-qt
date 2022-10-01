// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERINPUTDEVICERESPONSE_P_H
#define QTAWS_TRANSFERINPUTDEVICERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class TransferInputDeviceResponse;

class TransferInputDeviceResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit TransferInputDeviceResponsePrivate(TransferInputDeviceResponse * const q);

    void parseTransferInputDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransferInputDeviceResponse)
    Q_DISABLE_COPY(TransferInputDeviceResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
