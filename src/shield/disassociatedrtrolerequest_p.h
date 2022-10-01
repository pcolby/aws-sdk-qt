// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEDRTROLEREQUEST_P_H
#define QTAWS_DISASSOCIATEDRTROLEREQUEST_P_H

#include "shieldrequest_p.h"
#include "disassociatedrtrolerequest.h"

namespace QtAws {
namespace Shield {

class DisassociateDRTRoleRequest;

class DisassociateDRTRoleRequestPrivate : public ShieldRequestPrivate {

public:
    DisassociateDRTRoleRequestPrivate(const ShieldRequest::Action action,
                                   DisassociateDRTRoleRequest * const q);
    DisassociateDRTRoleRequestPrivate(const DisassociateDRTRoleRequestPrivate &other,
                                   DisassociateDRTRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateDRTRoleRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
