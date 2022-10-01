// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEREQUEST_P_H
#define QTAWS_DELETEPROFILEREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "deleteprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteProfileRequest;

class DeleteProfileRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    DeleteProfileRequestPrivate(const RolesAnywhereRequest::Action action,
                                   DeleteProfileRequest * const q);
    DeleteProfileRequestPrivate(const DeleteProfileRequestPrivate &other,
                                   DeleteProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
