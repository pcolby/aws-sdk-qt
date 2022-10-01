// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEMETRICDATARESPONSE_P_H
#define QTAWS_GETINSTANCEMETRICDATARESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceMetricDataResponse;

class GetInstanceMetricDataResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetInstanceMetricDataResponsePrivate(GetInstanceMetricDataResponse * const q);

    void parseGetInstanceMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInstanceMetricDataResponse)
    Q_DISABLE_COPY(GetInstanceMetricDataResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
