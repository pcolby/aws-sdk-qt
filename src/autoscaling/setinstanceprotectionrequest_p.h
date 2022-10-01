// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEPROTECTIONREQUEST_P_H
#define QTAWS_SETINSTANCEPROTECTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "setinstanceprotectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceProtectionRequest;

class SetInstanceProtectionRequestPrivate : public AutoScalingRequestPrivate {

public:
    SetInstanceProtectionRequestPrivate(const AutoScalingRequest::Action action,
                                   SetInstanceProtectionRequest * const q);
    SetInstanceProtectionRequestPrivate(const SetInstanceProtectionRequestPrivate &other,
                                   SetInstanceProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetInstanceProtectionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
