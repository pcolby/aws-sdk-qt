// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONREQUEST_P_H
#define QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONREQUEST_P_H

#include "ramrequest_p.h"
#include "disassociateresourcesharepermissionrequest.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceSharePermissionRequest;

class DisassociateResourceSharePermissionRequestPrivate : public RamRequestPrivate {

public:
    DisassociateResourceSharePermissionRequestPrivate(const RamRequest::Action action,
                                   DisassociateResourceSharePermissionRequest * const q);
    DisassociateResourceSharePermissionRequestPrivate(const DisassociateResourceSharePermissionRequestPrivate &other,
                                   DisassociateResourceSharePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateResourceSharePermissionRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
