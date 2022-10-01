// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSREQUEST_P_H
#define QTAWS_DECLINEINVITATIONSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "declineinvitationsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeclineInvitationsRequest;

class DeclineInvitationsRequestPrivate : public SecurityHubRequestPrivate {

public:
    DeclineInvitationsRequestPrivate(const SecurityHubRequest::Action action,
                                   DeclineInvitationsRequest * const q);
    DeclineInvitationsRequestPrivate(const DeclineInvitationsRequestPrivate &other,
                                   DeclineInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeclineInvitationsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
