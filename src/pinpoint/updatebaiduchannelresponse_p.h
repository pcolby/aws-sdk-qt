// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBAIDUCHANNELRESPONSE_P_H
#define QTAWS_UPDATEBAIDUCHANNELRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateBaiduChannelResponse;

class UpdateBaiduChannelResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateBaiduChannelResponsePrivate(UpdateBaiduChannelResponse * const q);

    void parseUpdateBaiduChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBaiduChannelResponse)
    Q_DISABLE_COPY(UpdateBaiduChannelResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
