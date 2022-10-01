// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSREQUEST_P_H
#define QTAWS_DECLINEINVITATIONSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "declineinvitationsrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeclineInvitationsRequest;

class DeclineInvitationsRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeclineInvitationsRequestPrivate(const GuardDutyRequest::Action action,
                                   DeclineInvitationsRequest * const q);
    DeclineInvitationsRequestPrivate(const DeclineInvitationsRequestPrivate &other,
                                   DeclineInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeclineInvitationsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
