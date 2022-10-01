// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINVITATIONSREQUEST_P_H
#define QTAWS_DELETEINVITATIONSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "deleteinvitationsrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteInvitationsRequest;

class DeleteInvitationsRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeleteInvitationsRequestPrivate(const GuardDutyRequest::Action action,
                                   DeleteInvitationsRequest * const q);
    DeleteInvitationsRequestPrivate(const DeleteInvitationsRequestPrivate &other,
                                   DeleteInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInvitationsRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
