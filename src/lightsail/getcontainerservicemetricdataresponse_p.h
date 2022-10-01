// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEMETRICDATARESPONSE_P_H
#define QTAWS_GETCONTAINERSERVICEMETRICDATARESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServiceMetricDataResponse;

class GetContainerServiceMetricDataResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetContainerServiceMetricDataResponsePrivate(GetContainerServiceMetricDataResponse * const q);

    void parseGetContainerServiceMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerServiceMetricDataResponse)
    Q_DISABLE_COPY(GetContainerServiceMetricDataResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
