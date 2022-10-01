// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKTESTANOMALYDETECTORREQUEST_P_H
#define QTAWS_BACKTESTANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "backtestanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class BackTestAnomalyDetectorRequest;

class BackTestAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    BackTestAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   BackTestAnomalyDetectorRequest * const q);
    BackTestAnomalyDetectorRequestPrivate(const BackTestAnomalyDetectorRequestPrivate &other,
                                   BackTestAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(BackTestAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
