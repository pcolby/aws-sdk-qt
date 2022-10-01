// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERREQUEST_P_H
#define QTAWS_DISASSOCIATEMEMBERREQUEST_P_H

#include "inspector2request_p.h"
#include "disassociatememberrequest.h"

namespace QtAws {
namespace Inspector2 {

class DisassociateMemberRequest;

class DisassociateMemberRequestPrivate : public Inspector2RequestPrivate {

public:
    DisassociateMemberRequestPrivate(const Inspector2Request::Action action,
                                   DisassociateMemberRequest * const q);
    DisassociateMemberRequestPrivate(const DisassociateMemberRequestPrivate &other,
                                   DisassociateMemberRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMemberRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
