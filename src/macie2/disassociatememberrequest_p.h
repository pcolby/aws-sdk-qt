// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERREQUEST_P_H
#define QTAWS_DISASSOCIATEMEMBERREQUEST_P_H

#include "macie2request_p.h"
#include "disassociatememberrequest.h"

namespace QtAws {
namespace Macie2 {

class DisassociateMemberRequest;

class DisassociateMemberRequestPrivate : public Macie2RequestPrivate {

public:
    DisassociateMemberRequestPrivate(const Macie2Request::Action action,
                                   DisassociateMemberRequest * const q);
    DisassociateMemberRequestPrivate(const DisassociateMemberRequestPrivate &other,
                                   DisassociateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
