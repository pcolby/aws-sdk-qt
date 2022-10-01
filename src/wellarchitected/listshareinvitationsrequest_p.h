// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREINVITATIONSREQUEST_P_H
#define QTAWS_LISTSHAREINVITATIONSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "listshareinvitationsrequest.h"

namespace QtAws {
namespace WellArchitected {

class ListShareInvitationsRequest;

class ListShareInvitationsRequestPrivate : public WellArchitectedRequestPrivate {

public:
    ListShareInvitationsRequestPrivate(const WellArchitectedRequest::Action action,
                                   ListShareInvitationsRequest * const q);
    ListShareInvitationsRequestPrivate(const ListShareInvitationsRequestPrivate &other,
                                   ListShareInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListShareInvitationsRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
