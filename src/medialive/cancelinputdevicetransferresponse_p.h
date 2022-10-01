// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINPUTDEVICETRANSFERRESPONSE_P_H
#define QTAWS_CANCELINPUTDEVICETRANSFERRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class CancelInputDeviceTransferResponse;

class CancelInputDeviceTransferResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit CancelInputDeviceTransferResponsePrivate(CancelInputDeviceTransferResponse * const q);

    void parseCancelInputDeviceTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelInputDeviceTransferResponse)
    Q_DISABLE_COPY(CancelInputDeviceTransferResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
