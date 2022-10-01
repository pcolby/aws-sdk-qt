// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANOMALYGROUPRESPONSE_P_H
#define QTAWS_GETANOMALYGROUPRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class GetAnomalyGroupResponse;

class GetAnomalyGroupResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit GetAnomalyGroupResponsePrivate(GetAnomalyGroupResponse * const q);

    void parseGetAnomalyGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAnomalyGroupResponse)
    Q_DISABLE_COPY(GetAnomalyGroupResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
