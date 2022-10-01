// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDESIREDCAPACITYREQUEST_P_H
#define QTAWS_SETDESIREDCAPACITYREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "setdesiredcapacityrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetDesiredCapacityRequest;

class SetDesiredCapacityRequestPrivate : public AutoScalingRequestPrivate {

public:
    SetDesiredCapacityRequestPrivate(const AutoScalingRequest::Action action,
                                   SetDesiredCapacityRequest * const q);
    SetDesiredCapacityRequestPrivate(const SetDesiredCapacityRequestPrivate &other,
                                   SetDesiredCapacityRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDesiredCapacityRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
