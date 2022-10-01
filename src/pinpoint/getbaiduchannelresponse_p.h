// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBAIDUCHANNELRESPONSE_P_H
#define QTAWS_GETBAIDUCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetBaiduChannelResponse;

class GetBaiduChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetBaiduChannelResponsePrivate(GetBaiduChannelResponse * const q);

    void parseGetBaiduChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBaiduChannelResponse)
    Q_DISABLE_COPY(GetBaiduChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
