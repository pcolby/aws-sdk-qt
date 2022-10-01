// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESREQUEST_P_H
#define QTAWS_ATTACHINSTANCESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "attachinstancesrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachInstancesRequest;

class AttachInstancesRequestPrivate : public AutoScalingRequestPrivate {

public:
    AttachInstancesRequestPrivate(const AutoScalingRequest::Action action,
                                   AttachInstancesRequest * const q);
    AttachInstancesRequestPrivate(const AttachInstancesRequestPrivate &other,
                                   AttachInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachInstancesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
