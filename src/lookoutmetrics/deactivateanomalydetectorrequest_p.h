// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEANOMALYDETECTORREQUEST_P_H
#define QTAWS_DEACTIVATEANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "deactivateanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeactivateAnomalyDetectorRequest;

class DeactivateAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DeactivateAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DeactivateAnomalyDetectorRequest * const q);
    DeactivateAnomalyDetectorRequestPrivate(const DeactivateAnomalyDetectorRequestPrivate &other,
                                   DeactivateAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeactivateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
