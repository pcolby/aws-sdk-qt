// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADMCHANNELRESPONSE_P_H
#define QTAWS_UPDATEADMCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateAdmChannelResponse;

class UpdateAdmChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateAdmChannelResponsePrivate(UpdateAdmChannelResponse * const q);

    void parseUpdateAdmChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAdmChannelResponse)
    Q_DISABLE_COPY(UpdateAdmChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
