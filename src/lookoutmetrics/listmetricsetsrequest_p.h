// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSETSREQUEST_P_H
#define QTAWS_LISTMETRICSETSREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "listmetricsetsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListMetricSetsRequest;

class ListMetricSetsRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ListMetricSetsRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ListMetricSetsRequest * const q);
    ListMetricSetsRequestPrivate(const ListMetricSetsRequestPrivate &other,
                                   ListMetricSetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMetricSetsRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
