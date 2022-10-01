// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTROLEREQUEST_P_H
#define QTAWS_ASSOCIATEDRTROLEREQUEST_P_H

#include "shieldrequest_p.h"
#include "associatedrtrolerequest.h"

namespace QtAws {
namespace Shield {

class AssociateDRTRoleRequest;

class AssociateDRTRoleRequestPrivate : public ShieldRequestPrivate {

public:
    AssociateDRTRoleRequestPrivate(const ShieldRequest::Action action,
                                   AssociateDRTRoleRequest * const q);
    AssociateDRTRoleRequestPrivate(const AssociateDRTRoleRequestPrivate &other,
                                   AssociateDRTRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateDRTRoleRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
