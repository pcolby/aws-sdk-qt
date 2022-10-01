// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALERTSRESPONSE_P_H
#define QTAWS_LISTALERTSRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAlertsResponse;

class ListAlertsResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit ListAlertsResponsePrivate(ListAlertsResponse * const q);

    void parseListAlertsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlertsResponse)
    Q_DISABLE_COPY(ListAlertsResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
