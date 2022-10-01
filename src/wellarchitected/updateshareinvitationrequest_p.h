// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESHAREINVITATIONREQUEST_P_H
#define QTAWS_UPDATESHAREINVITATIONREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "updateshareinvitationrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateShareInvitationRequest;

class UpdateShareInvitationRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpdateShareInvitationRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpdateShareInvitationRequest * const q);
    UpdateShareInvitationRequestPrivate(const UpdateShareInvitationRequestPrivate &other,
                                   UpdateShareInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateShareInvitationRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
