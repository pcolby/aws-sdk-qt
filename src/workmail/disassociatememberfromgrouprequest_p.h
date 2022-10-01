// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERFROMGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEMEMBERFROMGROUPREQUEST_P_H

#include "workmailrequest_p.h"
#include "disassociatememberfromgrouprequest.h"

namespace QtAws {
namespace WorkMail {

class DisassociateMemberFromGroupRequest;

class DisassociateMemberFromGroupRequestPrivate : public WorkMailRequestPrivate {

public:
    DisassociateMemberFromGroupRequestPrivate(const WorkMailRequest::Action action,
                                   DisassociateMemberFromGroupRequest * const q);
    DisassociateMemberFromGroupRequestPrivate(const DisassociateMemberFromGroupRequestPrivate &other,
                                   DisassociateMemberFromGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberFromGroupRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
