// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHAREPERMISSIONREQUEST_P_H
#define QTAWS_ASSOCIATERESOURCESHAREPERMISSIONREQUEST_P_H

#include "ramrequest_p.h"
#include "associateresourcesharepermissionrequest.h"

namespace QtAws {
namespace Ram {

class AssociateResourceSharePermissionRequest;

class AssociateResourceSharePermissionRequestPrivate : public RamRequestPrivate {

public:
    AssociateResourceSharePermissionRequestPrivate(const RamRequest::Action action,
                                   AssociateResourceSharePermissionRequest * const q);
    AssociateResourceSharePermissionRequestPrivate(const AssociateResourceSharePermissionRequestPrivate &other,
                                   AssociateResourceSharePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateResourceSharePermissionRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
