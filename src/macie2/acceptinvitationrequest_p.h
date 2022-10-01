// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONREQUEST_P_H
#define QTAWS_ACCEPTINVITATIONREQUEST_P_H

#include "macie2request_p.h"
#include "acceptinvitationrequest.h"

namespace QtAws {
namespace Macie2 {

class AcceptInvitationRequest;

class AcceptInvitationRequestPrivate : public Macie2RequestPrivate {

public:
    AcceptInvitationRequestPrivate(const Macie2Request::Action action,
                                   AcceptInvitationRequest * const q);
    AcceptInvitationRequestPrivate(const AcceptInvitationRequestPrivate &other,
                                   AcceptInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptInvitationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
