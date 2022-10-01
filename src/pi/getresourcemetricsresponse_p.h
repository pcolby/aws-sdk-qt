// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETRICSRESPONSE_P_H
#define QTAWS_GETRESOURCEMETRICSRESPONSE_P_H

#include "piresponse_p.h"

namespace QtAws {
namespace Pi {

class GetResourceMetricsResponse;

class GetResourceMetricsResponsePrivate : public PiResponsePrivate {

public:

    explicit GetResourceMetricsResponsePrivate(GetResourceMetricsResponse * const q);

    void parseGetResourceMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceMetricsResponse)
    Q_DISABLE_COPY(GetResourceMetricsResponsePrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
