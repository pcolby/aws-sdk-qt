// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETDISTRIBUTIONCACHERESPONSE_P_H
#define QTAWS_RESETDISTRIBUTIONCACHERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class ResetDistributionCacheResponse;

class ResetDistributionCacheResponsePrivate : public LightsailResponsePrivate {

public:

    explicit ResetDistributionCacheResponsePrivate(ResetDistributionCacheResponse * const q);

    void parseResetDistributionCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetDistributionCacheResponse)
    Q_DISABLE_COPY(ResetDistributionCacheResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
