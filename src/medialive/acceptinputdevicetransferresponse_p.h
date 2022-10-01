// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINPUTDEVICETRANSFERRESPONSE_P_H
#define QTAWS_ACCEPTINPUTDEVICETRANSFERRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class AcceptInputDeviceTransferResponse;

class AcceptInputDeviceTransferResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit AcceptInputDeviceTransferResponsePrivate(AcceptInputDeviceTransferResponse * const q);

    void parseAcceptInputDeviceTransferResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptInputDeviceTransferResponse)
    Q_DISABLE_COPY(AcceptInputDeviceTransferResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
