// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONGROUPREQUEST_P_H
#define QTAWS_DELETEPROTECTIONGROUPREQUEST_P_H

#include "shieldrequest_p.h"
#include "deleteprotectiongrouprequest.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionGroupRequest;

class DeleteProtectionGroupRequestPrivate : public ShieldRequestPrivate {

public:
    DeleteProtectionGroupRequestPrivate(const ShieldRequest::Action action,
                                   DeleteProtectionGroupRequest * const q);
    DeleteProtectionGroupRequestPrivate(const DeleteProtectionGroupRequestPrivate &other,
                                   DeleteProtectionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
