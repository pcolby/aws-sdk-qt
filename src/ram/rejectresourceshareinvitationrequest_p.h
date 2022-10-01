// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTRESOURCESHAREINVITATIONREQUEST_P_H
#define QTAWS_REJECTRESOURCESHAREINVITATIONREQUEST_P_H

#include "ramrequest_p.h"
#include "rejectresourceshareinvitationrequest.h"

namespace QtAws {
namespace Ram {

class RejectResourceShareInvitationRequest;

class RejectResourceShareInvitationRequestPrivate : public RamRequestPrivate {

public:
    RejectResourceShareInvitationRequestPrivate(const RamRequest::Action action,
                                   RejectResourceShareInvitationRequest * const q);
    RejectResourceShareInvitationRequestPrivate(const RejectResourceShareInvitationRequestPrivate &other,
                                   RejectResourceShareInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectResourceShareInvitationRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
