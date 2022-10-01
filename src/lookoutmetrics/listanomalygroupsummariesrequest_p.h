// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTANOMALYGROUPSUMMARIESREQUEST_P_H
#define QTAWS_LISTANOMALYGROUPSUMMARIESREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "listanomalygroupsummariesrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAnomalyGroupSummariesRequest;

class ListAnomalyGroupSummariesRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ListAnomalyGroupSummariesRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ListAnomalyGroupSummariesRequest * const q);
    ListAnomalyGroupSummariesRequestPrivate(const ListAnomalyGroupSummariesRequestPrivate &other,
                                   ListAnomalyGroupSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAnomalyGroupSummariesRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
