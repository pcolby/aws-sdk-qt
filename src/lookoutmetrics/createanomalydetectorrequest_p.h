// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEANOMALYDETECTORREQUEST_P_H
#define QTAWS_CREATEANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "createanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAnomalyDetectorRequest;

class CreateAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    CreateAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   CreateAnomalyDetectorRequest * const q);
    CreateAnomalyDetectorRequestPrivate(const CreateAnomalyDetectorRequestPrivate &other,
                                   CreateAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
