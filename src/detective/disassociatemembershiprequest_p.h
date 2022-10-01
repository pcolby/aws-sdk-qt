// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMEMBERSHIPREQUEST_P_H
#define QTAWS_DISASSOCIATEMEMBERSHIPREQUEST_P_H

#include "detectiverequest_p.h"
#include "disassociatemembershiprequest.h"

namespace QtAws {
namespace Detective {

class DisassociateMembershipRequest;

class DisassociateMembershipRequestPrivate : public DetectiveRequestPrivate {

public:
    DisassociateMembershipRequestPrivate(const DetectiveRequest::Action action,
                                   DisassociateMembershipRequest * const q);
    DisassociateMembershipRequestPrivate(const DisassociateMembershipRequestPrivate &other,
                                   DisassociateMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateMembershipRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
