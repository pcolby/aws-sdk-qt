// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMEMBERREQUEST_P_H
#define QTAWS_ASSOCIATEMEMBERREQUEST_P_H

#include "inspector2request_p.h"
#include "associatememberrequest.h"

namespace QtAws {
namespace Inspector2 {

class AssociateMemberRequest;

class AssociateMemberRequestPrivate : public Inspector2RequestPrivate {

public:
    AssociateMemberRequestPrivate(const Inspector2Request::Action action,
                                   AssociateMemberRequest * const q);
    AssociateMemberRequestPrivate(const AssociateMemberRequestPrivate &other,
                                   AssociateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateMemberRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
