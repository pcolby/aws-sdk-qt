// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVITATIONSREQUEST_P_H
#define QTAWS_LISTINVITATIONSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "listinvitationsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListInvitationsRequest;

class ListInvitationsRequestPrivate : public GuardDutyRequestPrivate {

public:
    ListInvitationsRequestPrivate(const GuardDutyRequest::Action action,
                                   ListInvitationsRequest * const q);
    ListInvitationsRequestPrivate(const ListInvitationsRequestPrivate &other,
                                   ListInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInvitationsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
