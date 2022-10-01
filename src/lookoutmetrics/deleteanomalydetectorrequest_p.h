// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYDETECTORREQUEST_P_H
#define QTAWS_DELETEANOMALYDETECTORREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "deleteanomalydetectorrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeleteAnomalyDetectorRequest;

class DeleteAnomalyDetectorRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    DeleteAnomalyDetectorRequestPrivate(const LookoutMetricsRequest::Action action,
                                   DeleteAnomalyDetectorRequest * const q);
    DeleteAnomalyDetectorRequestPrivate(const DeleteAnomalyDetectorRequestPrivate &other,
                                   DeleteAnomalyDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalyDetectorRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
