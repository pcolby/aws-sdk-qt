// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEANOMALYDETECTORREQUEST_P_H
#define QTAWS_ACTIVATEANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "activateanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ActivateAnomalyDetectorRequest;

class ActivateAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    ActivateAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   ActivateAnomalyDetectorRequest * const q);
    ActivateAnomalyDetectorRequestPrivate(const ActivateAnomalyDetectorRequestPrivate &other,
                                   ActivateAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(ActivateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
