// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILCHANNELRESPONSE_P_H
#define QTAWS_GETEMAILCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailChannelResponse;

class GetEmailChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetEmailChannelResponsePrivate(GetEmailChannelResponse * const q);

    void parseGetEmailChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEmailChannelResponse)
    Q_DISABLE_COPY(GetEmailChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
