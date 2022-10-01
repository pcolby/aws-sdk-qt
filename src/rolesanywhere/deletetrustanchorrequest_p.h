// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTANCHORREQUEST_P_H
#define QTAWS_DELETETRUSTANCHORREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "deletetrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class DeleteTrustAnchorRequest;

class DeleteTrustAnchorRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    DeleteTrustAnchorRequestPrivate(const RolesAnywhereRequest::Action action,
                                   DeleteTrustAnchorRequest * const q);
    DeleteTrustAnchorRequestPrivate(const DeleteTrustAnchorRequestPrivate &other,
                                   DeleteTrustAnchorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
