// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINVITATIONREQUEST_P_H
#define QTAWS_REJECTINVITATIONREQUEST_P_H

#include "detectiverequest_p.h"
#include "rejectinvitationrequest.h"

namespace QtAws {
namespace Detective {

class RejectInvitationRequest;

class RejectInvitationRequestPrivate : public DetectiveRequestPrivate {

public:
    RejectInvitationRequestPrivate(const DetectiveRequest::Action action,
                                   RejectInvitationRequest * const q);
    RejectInvitationRequestPrivate(const RejectInvitationRequestPrivate &other,
                                   RejectInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectInvitationRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
