// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROTECTIONGROUPREQUEST_P_H
#define QTAWS_UPDATEPROTECTIONGROUPREQUEST_P_H

#include "shieldrequest_p.h"
#include "updateprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class UpdateProtectionGroupRequest;

class UpdateProtectionGroupRequestPrivate : public ShieldRequestPrivate {

public:
    UpdateProtectionGroupRequestPrivate(const ShieldRequest::Action action,
                                   UpdateProtectionGroupRequest * const q);
    UpdateProtectionGroupRequestPrivate(const UpdateProtectionGroupRequestPrivate &other,
                                   UpdateProtectionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
