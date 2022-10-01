// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICERESPONSE_P_H
#define QTAWS_CLAIMDEVICERESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ClaimDeviceResponse;

class ClaimDeviceResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ClaimDeviceResponsePrivate(ClaimDeviceResponse * const q);

    void parseClaimDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ClaimDeviceResponse)
    Q_DISABLE_COPY(ClaimDeviceResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
