// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSREQUEST_P_H
#define QTAWS_DELETEMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "deletemembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteMembersRequest;

class DeleteMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeleteMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   DeleteMembersRequest * const q);
    DeleteMembersRequestPrivate(const DeleteMembersRequestPrivate &other,
                                   DeleteMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
