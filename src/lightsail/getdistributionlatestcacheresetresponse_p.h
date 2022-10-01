// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONLATESTCACHERESETRESPONSE_P_H
#define QTAWS_GETDISTRIBUTIONLATESTCACHERESETRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionLatestCacheResetResponse;

class GetDistributionLatestCacheResetResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDistributionLatestCacheResetResponsePrivate(GetDistributionLatestCacheResetResponse * const q);

    void parseGetDistributionLatestCacheResetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDistributionLatestCacheResetResponse)
    Q_DISABLE_COPY(GetDistributionLatestCacheResetResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
