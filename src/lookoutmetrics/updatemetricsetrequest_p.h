// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMETRICSETREQUEST_P_H
#define QTAWS_UPDATEMETRICSETREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "updatemetricsetrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateMetricSetRequest;

class UpdateMetricSetRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    UpdateMetricSetRequestPrivate(const LookoutMetricsRequest::Action action,
                                   UpdateMetricSetRequest * const q);
    UpdateMetricSetRequestPrivate(const UpdateMetricSetRequestPrivate &other,
                                   UpdateMetricSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMetricSetRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
