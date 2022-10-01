// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERSREQUEST_P_H
#define QTAWS_GETMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "getmembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class GetMembersRequest;

class GetMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    GetMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   GetMembersRequest * const q);
    GetMembersRequestPrivate(const GetMembersRequestPrivate &other,
                                   GetMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
