// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERACCOUNTREQUEST_P_H
#define QTAWS_ASSOCIATEMEMBERACCOUNTREQUEST_P_H

#include "macierequest_p.h"
#include "associatememberaccountrequest.h"

namespace QtAws {
namespace Macie {

class AssociateMemberAccountRequest;

class AssociateMemberAccountRequestPrivate : public MacieRequestPrivate {

public:
    AssociateMemberAccountRequestPrivate(const MacieRequest::Action action,
                                   AssociateMemberAccountRequest * const q);
    AssociateMemberAccountRequestPrivate(const AssociateMemberAccountRequestPrivate &other,
                                   AssociateMemberAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateMemberAccountRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
