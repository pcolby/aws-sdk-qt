// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMETRICSCOLLECTIONREQUEST_P_H
#define QTAWS_ENABLEMETRICSCOLLECTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "enablemetricscollectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class EnableMetricsCollectionRequest;

class EnableMetricsCollectionRequestPrivate : public AutoScalingRequestPrivate {

public:
    EnableMetricsCollectionRequestPrivate(const AutoScalingRequest::Action action,
                                   EnableMetricsCollectionRequest * const q);
    EnableMetricsCollectionRequestPrivate(const EnableMetricsCollectionRequestPrivate &other,
                                   EnableMetricsCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableMetricsCollectionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
