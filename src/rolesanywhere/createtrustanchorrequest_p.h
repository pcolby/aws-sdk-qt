// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTANCHORREQUEST_P_H
#define QTAWS_CREATETRUSTANCHORREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "createtrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class CreateTrustAnchorRequest;

class CreateTrustAnchorRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    CreateTrustAnchorRequestPrivate(const RolesAnywhereRequest::Action action,
                                   CreateTrustAnchorRequest * const q);
    CreateTrustAnchorRequestPrivate(const CreateTrustAnchorRequestPrivate &other,
                                   CreateTrustAnchorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
