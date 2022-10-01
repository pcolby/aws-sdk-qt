// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEEDBACKREQUEST_P_H
#define QTAWS_GETFEEDBACKREQUEST_P_H

#include "lookoutmetricsrequest_p.h"
#include "getfeedbackrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetFeedbackRequest;

class GetFeedbackRequestPrivate : public LookoutMetricsRequestPrivate {

public:
    GetFeedbackRequestPrivate(const LookoutMetricsRequest::Action action,
                                   GetFeedbackRequest * const q);
    GetFeedbackRequestPrivate(const GetFeedbackRequestPrivate &other,
                                   GetFeedbackRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFeedbackRequest)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
