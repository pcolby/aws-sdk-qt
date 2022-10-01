// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTIMEBASEDAUTOSCALINGREQUEST_P_H
#define QTAWS_SETTIMEBASEDAUTOSCALINGREQUEST_P_H

#include "opsworksrequest_p.h"
#include "settimebasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetTimeBasedAutoScalingRequest;

class SetTimeBasedAutoScalingRequestPrivate : public OpsWorksRequestPrivate {

public:
    SetTimeBasedAutoScalingRequestPrivate(const OpsWorksRequest::Action action,
                                   SetTimeBasedAutoScalingRequest * const q);
    SetTimeBasedAutoScalingRequestPrivate(const SetTimeBasedAutoScalingRequestPrivate &other,
                                   SetTimeBasedAutoScalingRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTimeBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
