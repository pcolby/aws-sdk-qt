// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECRLREQUEST_P_H
#define QTAWS_DELETECRLREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "deletecrlrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteCrlRequest;

class DeleteCrlRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    DeleteCrlRequestPrivate(const RolesAnywhereRequest::Action action,
                                   DeleteCrlRequest * const q);
    DeleteCrlRequestPrivate(const DeleteCrlRequestPrivate &other,
                                   DeleteCrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCrlRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
