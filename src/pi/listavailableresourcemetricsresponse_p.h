// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEMETRICSRESPONSE_P_H
#define QTAWS_LISTAVAILABLERESOURCEMETRICSRESPONSE_P_H

#include "piresponse_p.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceMetricsResponse;

class ListAvailableResourceMetricsResponsePrivate : public PiResponsePrivate {

public:

    explicit ListAvailableResourceMetricsResponsePrivate(ListAvailableResourceMetricsResponse * const q);

    void parseListAvailableResourceMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAvailableResourceMetricsResponse)
    Q_DISABLE_COPY(ListAvailableResourceMetricsResponsePrivate)

};

} // namespace Pi
} // namespace QtAws

#endif
