// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREALTIMELOGCONFIGRESPONSE_P_H
#define QTAWS_UPDATEREALTIMELOGCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class UpdateRealtimeLogConfigResponse;

class UpdateRealtimeLogConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit UpdateRealtimeLogConfigResponsePrivate(UpdateRealtimeLogConfigResponse * const q);

    void parseUpdateRealtimeLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRealtimeLogConfigResponse)
    Q_DISABLE_COPY(UpdateRealtimeLogConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
