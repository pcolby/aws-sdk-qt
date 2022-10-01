// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTMETRICSETCONFIGREQUEST_P_H
#define QTAWS_DETECTMETRICSETCONFIGREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "detectmetricsetconfigrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DetectMetricSetConfigRequest;

class DetectMetricSetConfigRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DetectMetricSetConfigRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DetectMetricSetConfigRequest * const q);
    DetectMetricSetConfigRequestPrivate(const DetectMetricSetConfigRequestPrivate &other,
                                   DetectMetricSetConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetectMetricSetConfigRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
