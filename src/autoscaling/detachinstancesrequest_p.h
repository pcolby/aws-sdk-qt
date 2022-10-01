// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESREQUEST_P_H
#define QTAWS_DETACHINSTANCESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "detachinstancesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachInstancesRequest;

class DetachInstancesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DetachInstancesRequestPrivate(const AutoScalingRequest::Action action,
                                   DetachInstancesRequest * const q);
    DetachInstancesRequestPrivate(const DetachInstancesRequestPrivate &other,
                                   DetachInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachInstancesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
