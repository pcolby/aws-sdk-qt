// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPROACTIVEENGAGEMENTREQUEST_P_H
#define QTAWS_ENABLEPROACTIVEENGAGEMENTREQUEST_P_H

#include "shieldrequest_p.h"
#include "enableproactiveengagementrequest.h"

namespace QtAws {
namespace Shield {

class EnableProactiveEngagementRequest;

class EnableProactiveEngagementRequestPrivate : public ShieldRequestPrivate {

public:
    EnableProactiveEngagementRequestPrivate(const ShieldRequest::Action action,
                                   EnableProactiveEngagementRequest * const q);
    EnableProactiveEngagementRequestPrivate(const EnableProactiveEngagementRequestPrivate &other,
                                   EnableProactiveEngagementRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableProactiveEngagementRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
