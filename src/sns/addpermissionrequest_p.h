// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPERMISSIONREQUEST_P_H
#define QTAWS_ADDPERMISSIONREQUEST_P_H

#include "snsrequest_p.h"
#include "addpermissionrequest.h"

namespace QtAws {
namespace Sns {

class AddPermissionRequest;

class AddPermissionRequestPrivate : public SnsRequestPrivate {

public:
    AddPermissionRequestPrivate(const SnsRequest::Action action,
                                   AddPermissionRequest * const q);
    AddPermissionRequestPrivate(const AddPermissionRequestPrivate &other,
                                   AddPermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddPermissionRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
