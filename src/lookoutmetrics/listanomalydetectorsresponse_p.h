// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYDETECTORSRESPONSE_P_H
#define QTAWS_LISTANOMALYDETECTORSRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyDetectorsResponse;

class ListAnomalyDetectorsResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ListAnomalyDetectorsResponsePrivate(ListAnomalyDetectorsResponse * const q);

    void parseListAnomalyDetectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAnomalyDetectorsResponse)
    Q_DISABLE_COPY(ListAnomalyDetectorsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
