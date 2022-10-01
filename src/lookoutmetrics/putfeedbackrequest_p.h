// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKREQUEST_P_H
#define QTAWS_PUTFEEDBACKREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "putfeedbackrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class PutFeedbackRequest;

class PutFeedbackRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    PutFeedbackRequestPrivate(const LookoutMetricsRequest::Action action,
                                   PutFeedbackRequest * const q);
    PutFeedbackRequestPrivate(const PutFeedbackRequestPrivate &other,
                                   PutFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutFeedbackRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
