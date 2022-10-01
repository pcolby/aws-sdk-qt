// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINPUTDEVICETRANSFERRESPONSE_P_H
#define QTAWS_REJECTINPUTDEVICETRANSFERRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class RejectInputDeviceTransferResponse;

class RejectInputDeviceTransferResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit RejectInputDeviceTransferResponsePrivate(RejectInputDeviceTransferResponse * const q);

    void parseRejectInputDeviceTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectInputDeviceTransferResponse)
    Q_DISABLE_COPY(RejectInputDeviceTransferResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
