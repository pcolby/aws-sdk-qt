// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMETRICSCOLLECTIONREQUEST_P_H
#define QTAWS_DISABLEMETRICSCOLLECTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "disablemetricscollectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class DisableMetricsCollectionRequest;

class DisableMetricsCollectionRequestPrivate : public AutoScalingRequestPrivate {

public:
    DisableMetricsCollectionRequestPrivate(const AutoScalingRequest::Action action,
                                   DisableMetricsCollectionRequest * const q);
    DisableMetricsCollectionRequestPrivate(const DisableMetricsCollectionRequestPrivate &other,
                                   DisableMetricsCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableMetricsCollectionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
