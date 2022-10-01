// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEHEALTHREQUEST_P_H
#define QTAWS_SETINSTANCEHEALTHREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "setinstancehealthrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceHealthRequest;

class SetInstanceHealthRequestPrivate : public AutoScalingRequestPrivate {

public:
    SetInstanceHealthRequestPrivate(const AutoScalingRequest::Action action,
                                   SetInstanceHealthRequest * const q);
    SetInstanceHealthRequestPrivate(const SetInstanceHealthRequestPrivate &other,
                                   SetInstanceHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetInstanceHealthRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
