// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSREQUEST_P_H
#define QTAWS_ASSOCIATEPROACTIVEENGAGEMENTDETAILSREQUEST_P_H

#include "shieldrequest_p.h"
#include "associateproactiveengagementdetailsrequest.h"

namespace QtAws {
namespace Shield {

class AssociateProactiveEngagementDetailsRequest;

class AssociateProactiveEngagementDetailsRequestPrivate : public ShieldRequestPrivate {

public:
    AssociateProactiveEngagementDetailsRequestPrivate(const ShieldRequest::Action action,
                                   AssociateProactiveEngagementDetailsRequest * const q);
    AssociateProactiveEngagementDetailsRequestPrivate(const AssociateProactiveEngagementDetailsRequestPrivate &other,
                                   AssociateProactiveEngagementDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateProactiveEngagementDetailsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
