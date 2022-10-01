// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILCHANNELRESPONSE_P_H
#define QTAWS_UPDATEEMAILCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailChannelResponse;

class UpdateEmailChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateEmailChannelResponsePrivate(UpdateEmailChannelResponse * const q);

    void parseUpdateEmailChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEmailChannelResponse)
    Q_DISABLE_COPY(UpdateEmailChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
