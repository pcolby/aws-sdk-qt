// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBASEDAUTOSCALINGREQUEST_P_H
#define QTAWS_SETLOADBASEDAUTOSCALINGREQUEST_P_H

#include "opsworksrequest_p.h"
#include "setloadbasedautoscalingrequest.h"

namespace QtAws {
namespace OpsWorks {

class SetLoadBasedAutoScalingRequest;

class SetLoadBasedAutoScalingRequestPrivate : public OpsWorksRequestPrivate {

public:
    SetLoadBasedAutoScalingRequestPrivate(const OpsWorksRequest::Action action,
                                   SetLoadBasedAutoScalingRequest * const q);
    SetLoadBasedAutoScalingRequestPrivate(const SetLoadBasedAutoScalingRequestPrivate &other,
                                   SetLoadBasedAutoScalingRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetLoadBasedAutoScalingRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
