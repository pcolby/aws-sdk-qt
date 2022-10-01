// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEPROACTIVEENGAGEMENTREQUEST_P_H
#define QTAWS_DISABLEPROACTIVEENGAGEMENTREQUEST_P_H

#include "shieldrequest_p.h"
#include "disableproactiveengagementrequest.h"

namespace QtAws {
namespace Shield {

class DisableProactiveEngagementRequest;

class DisableProactiveEngagementRequestPrivate : public ShieldRequestPrivate {

public:
    DisableProactiveEngagementRequestPrivate(const ShieldRequest::Action action,
                                   DisableProactiveEngagementRequest * const q);
    DisableProactiveEngagementRequestPrivate(const DisableProactiveEngagementRequestPrivate &other,
                                   DisableProactiveEngagementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableProactiveEngagementRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
