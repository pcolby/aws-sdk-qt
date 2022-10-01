// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGRESPONSE_P_H
#define QTAWS_LISTDISTRIBUTIONSBYREALTIMELOGCONFIGRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListDistributionsByRealtimeLogConfigResponse;

class ListDistributionsByRealtimeLogConfigResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListDistributionsByRealtimeLogConfigResponsePrivate(ListDistributionsByRealtimeLogConfigResponse * const q);

    void parseListDistributionsByRealtimeLogConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDistributionsByRealtimeLogConfigResponse)
    Q_DISABLE_COPY(ListDistributionsByRealtimeLogConfigResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
