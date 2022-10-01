// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERACCOUNTREQUEST_P_H
#define QTAWS_DISASSOCIATEMEMBERACCOUNTREQUEST_P_H

#include "macierequest_p.h"
#include "disassociatememberaccountrequest.h"

namespace QtAws {
namespace Macie {

class DisassociateMemberAccountRequest;

class DisassociateMemberAccountRequestPrivate : public MacieRequestPrivate {

public:
    DisassociateMemberAccountRequestPrivate(const MacieRequest::Action action,
                                   DisassociateMemberAccountRequest * const q);
    DisassociateMemberAccountRequestPrivate(const DisassociateMemberAccountRequestPrivate &other,
                                   DisassociateMemberAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberAccountRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
