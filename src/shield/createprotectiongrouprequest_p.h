// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONGROUPREQUEST_P_H
#define QTAWS_CREATEPROTECTIONGROUPREQUEST_P_H

#include "shieldrequest_p.h"
#include "createprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class CreateProtectionGroupRequest;

class CreateProtectionGroupRequestPrivate : public ShieldRequestPrivate {

public:
    CreateProtectionGroupRequestPrivate(const ShieldRequest::Action action,
                                   CreateProtectionGroupRequest * const q);
    CreateProtectionGroupRequestPrivate(const CreateProtectionGroupRequestPrivate &other,
                                   CreateProtectionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
