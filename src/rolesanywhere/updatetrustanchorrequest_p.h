// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTANCHORREQUEST_P_H
#define QTAWS_UPDATETRUSTANCHORREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "updatetrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateTrustAnchorRequest;

class UpdateTrustAnchorRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    UpdateTrustAnchorRequestPrivate(const RolesAnywhereRequest::Action action,
                                   UpdateTrustAnchorRequest * const q);
    UpdateTrustAnchorRequestPrivate(const UpdateTrustAnchorRequestPrivate &other,
                                   UpdateTrustAnchorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
