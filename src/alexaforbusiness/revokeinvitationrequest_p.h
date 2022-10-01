// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEINVITATIONREQUEST_P_H
#define QTAWS_REVOKEINVITATIONREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "revokeinvitationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RevokeInvitationRequest;

class RevokeInvitationRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    RevokeInvitationRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   RevokeInvitationRequest * const q);
    RevokeInvitationRequestPrivate(const RevokeInvitationRequestPrivate &other,
                                   RevokeInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeInvitationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
