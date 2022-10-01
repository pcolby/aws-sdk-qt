// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDINVITATIONREQUEST_P_H
#define QTAWS_SENDINVITATIONREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "sendinvitationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SendInvitationRequest;

class SendInvitationRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    SendInvitationRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   SendInvitationRequest * const q);
    SendInvitationRequestPrivate(const SendInvitationRequestPrivate &other,
                                   SendInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendInvitationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
