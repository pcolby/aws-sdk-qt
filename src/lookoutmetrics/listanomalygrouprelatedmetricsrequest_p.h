// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPRELATEDMETRICSREQUEST_P_H
#define QTAWS_LISTANOMALYGROUPRELATEDMETRICSREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "listanomalygrouprelatedmetricsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupRelatedMetricsRequest;

class ListAnomalyGroupRelatedMetricsRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ListAnomalyGroupRelatedMetricsRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ListAnomalyGroupRelatedMetricsRequest * const q);
    ListAnomalyGroupRelatedMetricsRequestPrivate(const ListAnomalyGroupRelatedMetricsRequestPrivate &other,
                                   ListAnomalyGroupRelatedMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnomalyGroupRelatedMetricsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
