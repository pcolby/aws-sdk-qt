// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLETRUSTANCHORREQUEST_P_H
#define QTAWS_ENABLETRUSTANCHORREQUEST_P_H

#include "rolesanywhererequest_p.h"
#include "enabletrustanchorrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class EnableTrustAnchorRequest;

class EnableTrustAnchorRequestPrivate : public RolesAnywhereRequestPrivate {

public:
    EnableTrustAnchorRequestPrivate(const RolesAnywhereRequest::Action action,
                                   EnableTrustAnchorRequest * const q);
    EnableTrustAnchorRequestPrivate(const EnableTrustAnchorRequestPrivate &other,
                                   EnableTrustAnchorRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableTrustAnchorRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
