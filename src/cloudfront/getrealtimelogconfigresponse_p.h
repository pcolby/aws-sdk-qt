// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREALTIMELOGCONFIGRESPONSE_P_H
#define QTAWS_GETREALTIMELOGCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class GetRealtimeLogConfigResponse;

class GetRealtimeLogConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit GetRealtimeLogConfigResponsePrivate(GetRealtimeLogConfigResponse * const q);

    void parseGetRealtimeLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRealtimeLogConfigResponse)
    Q_DISABLE_COPY(GetRealtimeLogConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
