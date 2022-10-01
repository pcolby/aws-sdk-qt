// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANOMALYDETECTORREQUEST_P_H
#define QTAWS_UPDATEANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "updateanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAnomalyDetectorRequest;

class UpdateAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    UpdateAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   UpdateAnomalyDetectorRequest * const q);
    UpdateAnomalyDetectorRequestPrivate(const UpdateAnomalyDetectorRequestPrivate &other,
                                   UpdateAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
