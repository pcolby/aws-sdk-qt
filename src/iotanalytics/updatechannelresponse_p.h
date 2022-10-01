// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECHANNELRESPONSE_P_H
#define QTAWS_UPDATECHANNELRESPONSE_P_H

#include "iotanalyticsresponse_p.h"

namespace QtAws {
namespace IoTAnalytics {

class UpdateChannelResponse;

class UpdateChannelResponsePrivate : public IoTAnalyticsResponsePrivate {

public:

    explicit UpdateChannelResponsePrivate(UpdateChannelResponse * const q);

    void parseUpdateChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateChannelResponse)
    Q_DISABLE_COPY(UpdateChannelResponsePrivate)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
