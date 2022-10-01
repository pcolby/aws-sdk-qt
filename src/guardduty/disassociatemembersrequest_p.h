// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSREQUEST_P_H
#define QTAWS_DISASSOCIATEMEMBERSREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "disassociatemembersrequest.h"

namespace QtAws {
namespace GuardDuty {

class DisassociateMembersRequest;

class DisassociateMembersRequestPrivate : public GuardDutyRequestPrivate {

public:
    DisassociateMembersRequestPrivate(const GuardDutyRequest::Action action,
                                   DisassociateMembersRequest * const q);
    DisassociateMembersRequestPrivate(const DisassociateMembersRequestPrivate &other,
                                   DisassociateMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMembersRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
