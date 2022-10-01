// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTRESOURCESHAREINVITATIONREQUEST_P_H
#define QTAWS_ACCEPTRESOURCESHAREINVITATIONREQUEST_P_H

#include "ramrequest_p.h"
#include "acceptresourceshareinvitationrequest.h"

namespace QtAws {
namespace Ram {

class AcceptResourceShareInvitationRequest;

class AcceptResourceShareInvitationRequestPrivate : public RamRequestPrivate {

public:
    AcceptResourceShareInvitationRequestPrivate(const RamRequest::Action action,
                                   AcceptResourceShareInvitationRequest * const q);
    AcceptResourceShareInvitationRequestPrivate(const AcceptResourceShareInvitationRequestPrivate &other,
                                   AcceptResourceShareInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AcceptResourceShareInvitationRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
