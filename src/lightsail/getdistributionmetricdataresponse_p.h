// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISTRIBUTIONMETRICDATARESPONSE_P_H
#define QTAWS_GETDISTRIBUTIONMETRICDATARESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetDistributionMetricDataResponse;

class GetDistributionMetricDataResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetDistributionMetricDataResponsePrivate(GetDistributionMetricDataResponse * const q);

    void parseGetDistributionMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDistributionMetricDataResponse)
    Q_DISABLE_COPY(GetDistributionMetricDataResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
